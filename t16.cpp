#include<iostream>
using namespace std;

void pet(int holidays);

int main()
{
    int holidays;
    cout<<"Enter numbers of Holidays: ";
    cin>>holidays;
    pet(holidays);
    return 0;
}
void pet(int holidays)
{
    int workingDay,difference,games,hour,min;
    workingDay = 365-holidays;
    games = workingDay*63 + holidays*127;
    difference = 30000 - games;
    hour = difference/60;
    min = (difference)%60;
    if(difference>0){
        cout<<"Tom sleeps well"<<endl<<hour<<" hours "<<min<<" minutes less to play";
        }
    else 
    cout<<"Tom will run away"<<endl<<(hour*-1)<<" hours "<<(min*-1)<<" minutes for play";
}













