#include<iostream>
using namespace std;
main()
{
 int num,w,x,y,z,sum;
 cout<<"Enter a four digit number = ";
 cin>>num;
 w=num%10;
 x=(num/10)%10;
 y=(num/100)%10;
 z=(num/1000)%10;
 cout<<"Sum of individual digits = "<< w+x+y+z <<endl;
}

