#include<iostream>
using namespace std;

void possibleBonus(int position, int friendPosition);
int main(){
    int position, friendPosition;
    cout<<"Enter your position: ";
    cin>>position;
    cout<<"Enter your friend's position: ";
    cin>>friendPosition;
    possibleBonus(position,friendPosition);
    return 0;
}
void possibleBonus(int position, int friendPosition){
    if((friendPosition-position)<=6)
    cout<<"True";
    else 
    cout<<"False";
}













