#include <iostream>
using namespace std;

void equal(int n1,int n2) 
{
    if (n1==n2)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    
}
int main() {
 int n1,n2;
 cout<<"Enter first number: ";
 cin>>n1;
 cout<<"Enter second number: ";
 cin>>n2;
 equal(n1,n2);

 return 0;
}














