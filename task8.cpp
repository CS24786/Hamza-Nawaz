#include<iostream>
using namespace std;
main()
{
  float vegetableprice,fruitprice,totalvegetables,totalfruits;
  cout<<"Enter the vegetable price = ";
  cin>>vegetableprice;
  cout<<"Enter the fruit price = ";
  cin>>fruitprice;
  cout<<"Enter the total vegetables = ";
  cin>>totalvegetables;
  cout<<"Enter the total fruits = ";
  cin>>totalfruits;
  cout<<"Total earnings in coins = " << vegetableprice * totalvegetables + fruitprice * totalfruits <<endl;
  float earningsincoins;
  cout<<"Enter the earnings in coins = ";
  cin>>earningsincoins;
  cout<<"Earningsinrupees = " << earningsincoins/1.94 <<endl;
}