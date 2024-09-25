#include<iostream>
using namespace std;
main()
{
 int age,moves;
 cout<<"Enter the person's age = ";
 cin>> age;
 cout<<"Enter the number of times they've moved:";
 cin>>moves;
 cout<<"Average number of years lived in the same house = "<< age/(1+moves) <<endl;
}

