#include<iostream>
using namespace std;
main()
{
  int v1,a,t;
  cout<<"Enter initial velocity = ";
  cin>>v1;
  cout<<"Enter acceleration = ";
  cin>>a;
  cout<<"Enter time = ";
  cin>>t;
  cout<<"final velocity = " << v1 + a * t <<endl;
}