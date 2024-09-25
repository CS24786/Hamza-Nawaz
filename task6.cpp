#include<iostream>
using namespace std;
main()
{
  float fertilizerbag,costofbag,areaofbag;
  cout<<"Enter size of fertilizer bag in pounds = ";
  cin>>fertilizerbag;
  cout<<"Enter the cost of bag = ";
  cin>>costofbag;
  cout<<"Enter the area of bag = ";
  cin>>areaofbag;
  cout<<"Cost of fertilizer per pound = " << costofbag/fertilizerbag <<endl;
  cout<<"Cost of fertilizer per square foot = " << costofbag/areaofbag <<endl;
}