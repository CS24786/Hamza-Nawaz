#include<iostream>
using namespace std;

void tpChecker(int people, int tp);
int main()
{
    int people,tp;
    cout<<"Number of people in the household: ";
    cin>>people;
    cout<<"Number of Rolls of TP: ";
    cin>>tp;
    tpChecker(people,tp);
    return 0;
}
void tpChecker(int people, int tp)
{
    float totalTp, totalUsedTp,days;
    totalTp = tp * 500;
    totalUsedTp = people * 57;
    days = totalTp/totalUsedTp;
    if(days>=14)
    cout<<"Your TP will last "<<days<<" days, no need to panic";
    else
    cout<<"Your TP will only last "<<days<<" days, buy more";
}













