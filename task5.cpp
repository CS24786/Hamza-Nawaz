#include<iostream>
using namespace std;
main()
{
 string name;
 float kg,days;
 cout<<"Enter the name of person = "<<endl;
 cin>>name;
 cout<<"Enter the target weight loss in kgs = ";
 cin>>kg;
 cout<<"Days need to target weight loss = " << kg * 15 <<endl;
 cout<<"Days to target weight loss = ";
 cin>>days;
 cout<<name<<" will need "<< days <<" days to lose weight by doctor's suggestion"<<endl;
}
