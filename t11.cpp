#include<iostream>
using namespace std;

void discount(string country, double price);
int main(){
    string country;
    float price;
    cout<<"Enter the country's name (Pakistan,Ireland,India,England,Canada): ";
    cin>>country;
    cout<<"Enter the ticket price in dollars: $";
    cin>>price;
    discount(country,price);

    return 0;
}
void discount(string country, double price){
    double discount;
    if(country== "Pakistan"){
        discount = price - (price * 5/100);
        cout<<"Final ticket price after discount: $"<<discount;        
    }
    else if(country=="Ireland"){
        discount = price - (price * 10/100);
        cout<<"Final ticket price after discount: $"<<discount;
    }
    else if(country=="India"){
        discount = price - (price * 20/100);
        cout<<"Final ticket price after discount: $"<<discount;
    }
    else if(country=="England"){
        discount = price - (price * 30/100);
        cout<<"Final ticket price after discount: $"<<discount;
    }
    else if(country=="Canada"){
        discount = price - (price * 45/100);
        cout<<"Final ticket price after discount: $"<<discount;
    }
    else 
    cout<<"Invalid input";
}














