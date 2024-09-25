#include<iostream>
using namespace std;
main()
{
  float impostercount,playercount;
  cout<<"Enter imposter count = ";
  cin>>impostercount;
  cout<<"Enter player count = ";
  cin>>playercount;
  cout<<"chance of imposter = " << 100 * (impostercount/playercount) <<endl;
}