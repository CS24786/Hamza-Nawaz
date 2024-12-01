#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

// Global Constants
const int Max_Properties = 50;
const int Max_Agents = 10;
const int Max_Clients = 20;
const int Max_Favorites = 10;
const int Max_Inquiries = 20;
const int Max_Transaction = 20;
const int WIDTH = 80;  // Set width for centering main text

// Global variables 
int propertyCount = 0, agentCount = 0, clientCount = 0, inquiryCount = 0, transactionCount = 0, favoriteCount = 0;

// Parallel arrays for storing information
string properties[Max_Properties];
string agents[Max_Agents];  
string agentPasswords[Max_Agents]; 
string clients[Max_Clients];
string clientPasswords[Max_Clients];
string inquiries[Max_Inquiries];
string transactionHistory[Max_Transaction];
string transactionDetails[Max_Transaction];
string favorites[Max_Favorites];

// Function declarations 
void loadData();
void saveData();
bool isAlpha(string str);
bool isValidPassword(string str);
void addNewProperty(string properties[], int& propertyCount);
void updateProperty(string properties[], int propertyCount);
void deleteProperty(string properties[], int& propertyCount);
void viewAllProperties(string properties[], int propertyCount);
void addNewClient(string clients[], string clientPasswords[], int& clientCount); 
void viewClientInfo(string clients[], int clientCount);
void generateReport(int propertyCount, int clientCount);
void addNewAgent(string agents[], string agentPasswords[], int& agentCount);
void viewAllAgents(string agents[], int agentCount);
void viewClientInquiries(string inquiries[], int inquiryCount);
void viewAvailableProperties(string properties[], int propertyCount);
void saveFavorites(string favorites[], int& favoriteCount);
void viewAllFavorites(string favorites[], int favoriteCount);
void inquireProperties(string inquiries[], int& inquiryCount);
void viewTransactionHistory(string transactionHistory[], int transactionCount);
void addTransaction(string transactionHistory[], int& transactionCount);

// Main function 
int main()
{
    loadData(); // Load data from files into arrays

    int choice;
    string username, password;
    bool correct = false;

    do 
    {
        system("cls");   // used to clear screen
        
        // Main system
        cout << "***********************************************************" << endl;
        cout << setfill(' ') << setw((WIDTH + 22) / 2) << "Welcome to the Real Estate Management System" << endl;
        cout << "***********************************************************" << endl;

        // Main Menu
        cout << endl;
        cout << setfill(' ') << setw((WIDTH - 5) / 2) << "=== Main Menu ===" << endl;
        cout << setw(WIDTH) << "" << endl;
        cout << setfill(' ') << setw(15) << "1. Administrator Login" << endl;
        cout << setfill(' ') << setw(15) << "2. Real Estate Agent Login" << endl;
        cout << setfill(' ') << setw(15) << "3. Client Login" << endl;
        cout << "4. Exit" << endl << endl;
        cout << "Select an option: ";
        cin >> choice;
        cout << endl;

        switch (choice) 
        {
            case 1: // Administrator Login
            { 
                system("cls");
                
                cout << endl;
                cout << "***********************************************************" << endl;
                cout << setfill(' ') << setw((WIDTH - 6) / 2) << "Administrator Login" << endl;
                cout << "***********************************************************" << endl;
                
                cout << "Enter Username: ";
                cin >> username;
                cout << "Enter Password: ";
                cin >> password;
                
                // check credentials
                if (username == "Hamza" && password == "2024-CS-141") 
                {
                    correct = true;
                    int adminChoice;
                    do
                    {
                        cout << endl;
                        cout << setfill(' ') << setw((WIDTH + 0) / 2) << "=== Administrator Menu ===" << endl << endl;
                        cout << "1. Add New Property" << endl;
                        cout << "2. Update Existing Property" << endl;
                        cout << "3. Delete Property" << endl;
                        cout << "4. View All Properties" << endl;
                        cout << "5. Add New Client" << endl;
                        cout << "6. View Client Information" << endl;  
                        cout << "7. Generate Report" << endl;
                        cout << "8. Add New Agent" << endl;
                        cout << "9. View All Agents" << endl;
                        cout << "10. Exit" << endl << endl;
                        cout << "Select an option: ";
                        cin >> adminChoice;
                        cout << endl;

                        switch (adminChoice) 
                        {  // Function call
                            case 1:
                                addNewProperty(properties, propertyCount);
                                break;
                            case 2:
                                updateProperty(properties, propertyCount);
                                break;
                            case 3:
                                deleteProperty(properties, propertyCount);
                                break;
                            case 4:
                                viewAllProperties(properties, propertyCount);
                                break;
                            case 5:
                                addNewClient(clients, clientPasswords, clientCount);    
                                break; 
                            case 6:
                                viewClientInfo(clients, clientCount);
                                break;
                            case 7:
                                generateReport(propertyCount, clientCount);
                                break;
                            case 8:
                                addNewAgent(agents, agentPasswords, agentCount);
                                break;
                            case 9:
                                viewAllAgents(agents, agentCount);
                                break;    
                            case 10:
                                cout << "Exiting Administrator Menu." << endl;
                                break;
                            default:
                                cout << "Invalid option! Try again." << endl;
                        }
                    } while (adminChoice != 10);
                }
                else 
                {
                    cout << "Invalid credentials! Try again." << endl;
                }
                break;
            }

            case 2:  // Real Estate Agent Login 
            { 
                system ("cls"); 
                
                cout << endl;
                cout << "***********************************************************" << endl;
                cout << setfill(' ') << setw((WIDTH - 10) / 2) << "Agent Login" << endl;
                cout << "***********************************************************" << endl;

                cout << "Enter Username: ";
                cin.ignore(); 
                getline(cin, username); 
                cout << "Enter Password: ";
                getline(cin, password);  
                
                // Check Credentials
                bool loggedIn = false;
                for (int i = 0; i < agentCount; i++) 
                {
                    if (agents[i] == username && agentPasswords[i] == password) 
                    {
                        loggedIn = true;
                        int agentChoice;
                        do 
                        {
                            cout << endl;
                            cout << setfill(' ') << setw((WIDTH + 0) / 2) << "=== Agent Dashboard ===" << endl << endl;
                            cout << "1. Add New Property" << endl;
                            cout << "2. View All Properties" << endl;
                            cout << "3. Update Property Information" << endl;
                            cout << "4. View Client Inquiries" << endl;
                            cout << "5. Exit" << endl << endl;
                            cout << "Select an option: ";
                            cin >> agentChoice;
                            cout << endl;

                            switch (agentChoice) 
                            { // Function call
                                case 1:
                                    addNewProperty(properties, propertyCount);
                                    break;
                                case 2:
                                    viewAllProperties(properties, propertyCount);
                                    break;
                                case 3:
                                    updateProperty(properties, propertyCount);
                                    break;
                                case 4:
                                    viewClientInquiries(inquiries, inquiryCount);
                                    break;
                                case 5:
                                    cout << "Exiting Agent Dashboard." << endl;
                                    break;
                                default:
                                    cout << "Invalid option! Try again." << endl;
                            }
                        } while (agentChoice != 5);
                    }
                }
                if (!loggedIn) 
                {
                    cout << "Invalid credentials! Try again." << endl;
                }
                break;
            }

            case 3: // Client Login
            { 
                system ("cls");
                
                cout << endl;
                cout << "***********************************************************" << endl;
                cout << setfill(' ') << setw((WIDTH - 10) / 2) << "Client Login" << endl;
                cout << "***********************************************************" << endl;
    
                cout << "Enter Username: ";
                cin.ignore(); 
                getline(cin, username); 
                cout << "Enter Password: ";
                getline(cin, password);  
                
                // Check Credentials
                bool correct = false;
                for (int i = 0; i < clientCount; i++) 
                {
                    if (clients[i] == username && clientPasswords[i] == password) 
                    {
                        correct = true;
                        int clientChoice;
                        do 
                        {
                            cout << endl;
                            cout << setfill(' ') << setw((WIDTH + 0) / 2) << "=== Client Dashboard ===" << endl << endl;
                            cout << "1. View Available Properties" << endl;
                            cout << "2. Add Property to Favorites" << endl;
                            cout << "3. Make an Inquiry" << endl;
                            cout << "4. Add Transaction" << endl;
                            cout << "5. View Transaction History" << endl;
                            cout << "6. View All Favorites" << endl;
                            cout << "7. Exit" << endl << endl;
                            cout << "Select an option: ";
                            cin >> clientChoice;
                            cout << endl;

                            switch (clientChoice) 
                            {  // Function call
                                case 1:
                                    viewAvailableProperties(properties, propertyCount);
                                    break;
                                case 2:
                                    saveFavorites(favorites, favoriteCount);
                                    break;
                                case 3:
                                    inquireProperties(inquiries, inquiryCount);
                                    break;
                                case 4:
                                    addTransaction(transactionHistory, transactionCount);
                                    break;    
                                case 5:
                                    viewTransactionHistory(transactionHistory, transactionCount);
                                    break;
                                case 6:
                                    viewAllFavorites(favorites, favoriteCount);  
                                    break;    
                                case 7:
                                    cout << "Exiting Client Dashboard." << endl;
                                    break;
                                default:
                                    cout << "Invalid option! Try again." << endl;
                            }
                        } while (clientChoice != 7);
                    }
                }
                if (!correct) 
                {
                    cout << "Invalid credentials! Try again." << endl;
                }
                break;
            }

            case 4:  // Exit
                saveData(); // Save data back to files before exit
                
                cout << "***********************************************************" << endl;
                cout << setfill(' ') << setw((WIDTH + 0) / 2) << "Exiting the system..." << endl;
                cout << "***********************************************************" << endl;
                break;

            default:
                cout << "Invalid option! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

// Function implementations for data loading and saving
void loadData() 
{
    ifstream propertyFile("properties.txt");
    ifstream agentFile("agents.txt");
    ifstream clientFile("clients.txt");
    ifstream inquiryFile("inquiries.txt");
    ifstream transactionFile("transactions.txt");
    ifstream favoritesFile("favorites.txt");

    // Error message if files are not exist
    if (!propertyFile) 
    {
        cout << "Error: Could not open properties file!" << endl;
        return;
    }
    if (!agentFile) 
    {
        cout << "Error: Could not open agents file!" << endl;
        return;
    }
    if (!clientFile) 
    {
        cout << "Error: Could not open clients file!" << endl;
        return;
    }
    if (!inquiryFile) 
    {
        cout << "Error: Could not open inquiries file!" << endl;
        return;
    }
    if (!transactionFile) 
    {
        cout << "Error: Could not open transactions file!" << endl;
        return;
    }
    if (!favoritesFile) 
    {
        cout << "Error: Could not open favorites file!" << endl;
        return;
    }

    if (propertyFile) 
    {
        while (getline(propertyFile, properties[propertyCount])) 
        {
            propertyCount++;
        }
        propertyFile.close();
    }

    if (agentFile) 
    {
        while (getline(agentFile, agents[agentCount]) && getline(agentFile, agentPasswords[agentCount])) 
        {
            agentCount++;
        }
        agentFile.close();
    }

    if (clientFile) 
    {
        while (getline(clientFile, clients[clientCount]) && getline(clientFile, clientPasswords[clientCount])) 
        {
            clientCount++;
        }
        clientFile.close();
    }

    if (inquiryFile) 
    {
        while (getline(inquiryFile, inquiries[inquiryCount])) 
        {
            inquiryCount++;
        }
        inquiryFile.close();
    }

    if (transactionFile) 
    {
        while (getline(transactionFile, transactionHistory[transactionCount])) 
        {
            transactionCount++;
        }
        transactionFile.close();
    }

    if (favoritesFile) 
    {
        while (getline(favoritesFile, favorites[favoriteCount])) 
        {
            favoriteCount++;
        }
        favoritesFile.close();
    }
}

void saveData() 
{
    ofstream propertyFile("properties.txt");
    ofstream agentFile("agents.txt");
    ofstream clientFile("clients.txt");
    ofstream inquiryFile("inquiries.txt");
    ofstream transactionFile("transactions.txt");
    ofstream favoritesFile("favorites.txt");

    // Save properties
    for (int i = 0; i < propertyCount; i++) 
    {
        propertyFile << properties[i] << endl;
    }

    // Save agents
    for (int i = 0; i < agentCount; i++) 
    {
        agentFile << agents[i] << endl << agentPasswords[i] << endl;
    }

    // Save clients
    for (int i = 0; i < clientCount; i++) 
    {
        clientFile << clients[i] << endl << clientPasswords[i] << endl;
    }

    // Save inquiries
    for (int i = 0; i < inquiryCount; i++) 
    {
        inquiryFile << inquiries[i] << endl;
    }

    // Save transactions
    for (int i = 0; i < transactionCount; i++) 
    {
        transactionFile << transactionHistory[i] << endl;
    }

    // Save favorites
    for (int i = 0; i < favoriteCount; i++) 
    {
        favoritesFile << favorites[i] << endl;
    }

    // Close all files
    propertyFile.close();
    agentFile.close();
    clientFile.close();
    inquiryFile.close();
    transactionFile.close();
    favoritesFile.close();
}

// Function definitions


// Function to check if the input string is alphabetic 
bool isAlpha(string str) 
{
    for (int i = 0; i < str.length(); i++) 
    {
        if (!isalpha(str[i]) && str[i] != ' ') 
        {
            return false; 
        }
    }
    return true; 
}

// Function to check if the password is valid 
bool isValidPassword(string str) 
{
    return str.length() > 0; 
}

// Function to add new Property
void addNewProperty(string properties[], int& propertyCount)
{
    string propertyName;
    cout << "Enter Property Name: ";
    cin.ignore(); 
    getline(cin, propertyName);
    while (!isAlpha(propertyName)) 
    {
        cout << "Invalid input!" << endl;
        cout << "Enter Property Name: ";
        getline(cin, propertyName);
    }
    properties[propertyCount] = propertyName;
    propertyCount++;
    cout << endl;
    cout << "Property added successfully!" << endl;
}

// Function to update Property
void updateProperty(string properties[], int propertyCount)
{
    if (propertyCount == 0) 
    {
        cout << "No properties available to update!" << endl;
        return;
    }
    
    string propertyName;
    cout << "Enter Property Name to update: ";
    cin.ignore(); 
    getline(cin, propertyName);
    while (!isAlpha(propertyName)) 
    {
        cout << "Invalid input!" << endl;
        cout << "Enter Property Name to update: ";
        getline(cin, propertyName);
    }

    bool found = false;
    for (int i = 0; i < propertyCount; i++) 
    {
        if (properties[i] == propertyName) 
        {
            found = true;
            cout << "Enter new Property Name: ";
            getline(cin, properties[i]);
            cout << endl;
            cout << "Property updated successfully!" << endl;
            break;
        }
    }
    
    if (!found) 
    {
        cout << "Property not found!" << endl;
    }
}

// Function to delete Property
void deleteProperty(string properties[], int& propertyCount)
{
    if (propertyCount == 0) 
    {
        cout << "No properties available to delete!" << endl;
        return;
    }
    
    string propertyName;
    cout << "Enter Property Name to delete: ";
    cin.ignore(); 
    getline(cin, propertyName);
    while (!isAlpha(propertyName)) 
    {
        cout << "Invalid input!" << endl;
        cout << "Enter Property Name to delete: ";
        getline(cin, propertyName);
    } 

    bool found = false;
    for (int i = 0; i < propertyCount; i++) 
    {
        if (properties[i] == propertyName) 
        {
            found = true;
            for (int j = i; j < propertyCount - 1; j++) 
            {
                properties[j] = properties[j + 1];
            }
            propertyCount--;
            cout << endl;
            cout << "Property deleted successfully!" << endl;
            break;
        }
    }
    
    if (!found) 
    {
        cout << "Property not found!" << endl;
    }
}

// Function to view all Properties
void viewAllProperties(string properties[], int propertyCount)
{
    if (propertyCount == 0) 
    {
        cout << "No properties available!" << endl;
        return;
    }

    cout << "***********************************************************" << endl;
    cout << "                Available Properties" << endl;
    cout << "***********************************************************" << endl;
    
    for (int i = 0; i < propertyCount; i++) 
    {
        cout << "     Property " << (i + 1) << "                   " << properties[i] << endl;
    }
    cout << "***********************************************************" << endl;
}

// Function to add new Client
void addNewClient(string clients[], string clientPasswords[], int& clientCount)
{
    string clientName, password;
    cout << "Enter Client Name: ";
    cin.ignore();
    getline(cin, clientName);
    while (!isAlpha(clientName)) 
    {
        cout << "Invalid input!" << endl;
        cout << "Enter Client Name: ";
        getline(cin, clientName);
    }
    cout << "Enter Password: ";
    getline(cin, password);
    while (!isValidPassword(password)) 
    {
        cout << "Invalid input!" << endl;
        cout << "Enter Password: ";
        getline(cin, password);
    }

    clients[clientCount] = clientName;
    clientPasswords[clientCount] = password;
    clientCount++;
    cout << endl;
    cout << "Client added successfully!" << endl;
}

// Function to view Client Information
void viewClientInfo(string clients[], int clientCount)
{
    if (clientCount == 0) 
    {
        cout << "No clients found!" << endl;
        return;
    }
    
    cout << "***********************************************************" << endl;
    cout << "                 Clients Information" << endl;
    cout << "***********************************************************" << endl;
    for (int i = 0; i < clientCount; i++) 
    {
        cout << "       Client " << (i + 1) << "                  " << clients[i] << endl;
        cout << "      Password " << (i + 1) << "                 " << clientPasswords[i] << endl;
    }
    cout << "***********************************************************" << endl;
}

// Function to Generate Report
void generateReport(int propertyCount, int clientCount)
{
    cout << "***********************************************************" << endl;
    cout << "                 Generate Report" << endl;
    cout << "***********************************************************" << endl;
    cout << "    Property Count " << "                   " << propertyCount << endl;
    cout << "     Client Count " << "                    " << clientCount << endl;
    cout << "     Agent Count " << "                     " << agentCount << endl;
    cout << "    Favorite Count " << "                   " << favoriteCount << endl;
    cout << "   Transaction Count " << "                 " << transactionCount << endl;
    cout << "***********************************************************" << endl;
}

// Function to add new Agent
void addNewAgent(string agents[], string agentPasswords[], int& agentCount)
{
    string agentName, password;
    cout << "Enter Agent Name: ";
    cin.ignore();
    getline(cin, agentName);
    while (!isAlpha(agentName)) 
    { 
        cout << "Invalid input!" << endl;
        cout << "Enter Agent Name: ";
        getline(cin, agentName);
    }
    cout << "Enter Password: ";
    getline(cin, password);
    while (!isValidPassword(password)) 
    {
        cout << "Invalid input!" << endl;
        cout << "Enter Password: ";
        getline(cin, password);
    }
    
    agents[agentCount] = agentName;
    agentPasswords[agentCount] = password;
    agentCount++;
    cout << endl;
    cout << "Agent added successfully!" << endl;
}

// Function to view all Agents
void viewAllAgents(string agents[], int agentCount)
{
    if (agentCount == 0) 
    {
        cout << "No agents found!" << endl;
        return;
    }
    
    cout << "***********************************************************" << endl;
    cout << "                 Agents Information " << endl;
    cout << "***********************************************************" << endl;

    for (int i = 0; i < agentCount; i++) 
    {
        cout << "       Agent " << (i + 1) << "                     " << agents[i] << endl;
        cout << "      Password " << (i + 1) << "                   " << agentPasswords[i] << endl;
    } 
    cout << "***********************************************************" << endl;
}

// Function to view Client Inquiries
void viewClientInquiries(string inquiries[], int inquiryCount)
{
    if (inquiryCount == 0) 
    {
        cout << "No inquiries found!" << endl;
        return;
    }
    
    cout << "***********************************************************" << endl;
    cout << "                 Clients Inquiries" << endl;
    cout << "***********************************************************" << endl;

    for (int i = 0; i < inquiryCount; i++) 
    {
        cout << "      Inquiry " << (i + 1) << "    " << inquiries[i] << endl;
    }
}

// Function to view available Properties
void viewAvailableProperties(string properties[], int propertyCount)
{
    if (propertyCount == 0) 
    {
        cout << "No properties available!" << endl;
        return;
    }

    cout << "***********************************************************" << endl;
    cout << "                Available Properties" << endl;
    cout << "***********************************************************" << endl;
    
    for (int i = 0; i < propertyCount; i++) 
    {
        cout << "     Property " << (i + 1) << "                   " << properties[i] << endl;
    }
    cout << "***********************************************************" << endl;
}

// Function to save favorites
void saveFavorites(string favorites[], int& favoriteCount)
{
    if (favoriteCount == Max_Favorites) 
    {
        cout << "Favorite list is full!" << endl;
        return;
    }
    
    string favoriteProperty;
    cout << "Enter Property to save as favorite: ";
    cin.ignore();
    getline(cin, favoriteProperty);
    while (!isAlpha(favoriteProperty)) 
    {
        cout << "Invalid input!" << endl;
        cout << "Enter Property to save as favorite: ";
        getline(cin, favoriteProperty);
    } 

    favorites[favoriteCount] = favoriteProperty;
    favoriteCount++;
    cout << endl;
    cout << "Property added to favorites!" << endl;
}

// Function to view all favorites
void viewAllFavorites(string favorites[], int favoriteCount) 
{
    if (favoriteCount == 0) 
    {
        cout << "No favorites added." << endl;
    } 
    else 
    {    
        cout << "***********************************************************" << endl;  
        cout << "               Favorite Properties" << endl;
        cout << "***********************************************************" << endl;
        for (int i = 0; i < favoriteCount; i++) {
            cout << "    Favorite " << (i + 1) << "          " << favorites[i] << endl;
        }
        cout << "***********************************************************" << endl;
    }
}

// Function to ask inquiry
void inquireProperties(string inquiries[], int& inquiryCount)
{
    if (inquiryCount == Max_Inquiries) 
    {
        cout << "Inquiry list is full!" << endl;
        return;
    }
    
    string inquiry;
    cout << "Enter Property Inquiry: ";
    cin.ignore();
    getline(cin, inquiry);
    while (!isAlpha(inquiry)) 
    {
        cout << "Invalid input!" << endl;
        cout << "Enter Property Inquiry: ";
        getline(cin, inquiry);
    } 
    inquiries[inquiryCount] = inquiry;
    inquiryCount++;
    cout << endl;
    cout << "Inquiry saved!" << endl;
}

// Function to view Transaction History
void viewTransactionHistory(string transactionHistory[], int transactionCount)
{
    if (transactionCount == 0) 
    {
        cout << "No transaction history!" << endl;
        return;
    }
     
    cout << "***********************************************************" << endl;
    cout << "                Transaction History" << endl;
    cout << "***********************************************************" << endl;

    for (int i = 0; i < transactionCount; i++) 
    {
        cout << "     Transaction " << (i + 1) << "         " << transactionHistory[i] << endl;
    }
    cout << "***********************************************************" << endl;
}

// Function to add a transaction
void addTransaction(string transactionHistory[], int& transactionCount) 
{
    if (transactionCount == Max_Transaction) 
    {
        cout << "Transaction history is full!" << endl;
        return;
    }
    
    string transactionDetails;
    cout << "Enter Transaction Details: ";
    cin.ignore(); 
    getline(cin, transactionDetails);  
    
    transactionHistory[transactionCount] = transactionDetails; 
    transactionCount++; 
    
    cout << endl;
    cout << "Transaction added!" << endl;
}