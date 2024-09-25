#include<iostream>
using namespace std;
main()
{
  float adultticketprice,childticketprice,adultticketssold,childticketssold,perdonatedtocharity;
  cout<<"Enter the adult ticket price = ";
  cin>>adultticketprice;
  cout<<"Enter the child ticket price = ";
  cin>>childticketprice;
  cout<<"Enter the adult tickets sold = ";
  cin>>adultticketssold;
  cout<<"Enter the child tickets sold = ";
  cin>>childticketssold;
  cout<<"Enter the per donated to charity = ";
  cin>>perdonatedtocharity;
  cout<<"Amount from tickets sales = " << adultticketprice * adultticketssold + childticketprice * childticketssold <<endl;
  float totalamount,donationtocharity;
  cout<<"Total amount = ";
  cin>>totalamount;
  cout<<"Donation to charity = " << totalamount * 10/100 <<endl;
  cout<<"Donation to charity = ";
  cin>>donationtocharity;
  cout<<"Remaining amount = " << totalamount - donationtocharity <<endl;
}