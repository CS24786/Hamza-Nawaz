#include<iostream>
using namespace std;

void longestDuration(float hour, float min);
int main(){
    float hour,min;
    cout<<"Enter the Hours: ";
    cin>>hour;
    cout<<"Enter the Minutes: ";
    cin>>min;
    longestDuration(hour,min);

    return 0;
}
void longestDuration(float hour, float min){
    float hourToMin = hour * 60;
    if (hourToMin > min)
    cout<<hour;
    else if(hourToMin < min)
    cout<<min;
    else 
    cout<<"Both are equal";
}













