#include <iostream>
using namespace std;

void Negation(string input){

    if (input=="False")
    {
        cout<<"True";
    }
    else if (input=="True")
    {
        cout<<"False";
    }
    else
    {
        cout<<"Invalid Input";
}
int main(){

 string input;
 cout<<"Enter either 'true' or 'false':"<<endl;
 cin>>input;
 Negation(input);

 return 0;
}














