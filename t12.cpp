#include<iostream>
using namespace std;

void checkSpeed(int speed);
int main(){
    int speed;
    cout<<"Enter speed: ";
    cin>>speed;
    checkSpeed(speed);
    return 0;
}
void checkSpeed(int speed){
    if(speed > 100)
    cout<<"Halt... YOU WILL BE CHALLENGED!!!";
    else 
    cout<<"Perfect! You're going good.";
}














