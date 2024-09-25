#include<iostream>
using namespace std;
main()
{
  int numofminutes,framespersecond;
  cout<<"Enter the number of minutes= ";
  cin>>numofminutes;
  cout<<"Enter the frames per second= ";
  cin>>framespersecond;
  cout<<"Total frames = " << numofminutes * framespersecond * 60 <<endl;
}