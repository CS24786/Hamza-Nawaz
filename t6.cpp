#include<iostream>
using namespace std;

void printH()
{
   cout<<" *   * "<<endl;
   cout<<" *   * "<<endl;
   cout<<" ***** "<<endl;
   cout<<" *   * "<<endl;
   cout<<" *   * "<<endl;
   cout<<endl;
}
 
void printA()
{
   cout<<"    *   "<<endl;
   cout<<"   * *  "<<endl;
   cout<<"  ***** "<<endl;
   cout<<"  *   * "<<endl;
   cout<<"  *   * "<<endl;
   cout<<endl;
}

void printS()
{
   cout<<"  ***** "<<endl;
   cout<<"  *     "<<endl;
   cout<<"  ***** "<<endl;
   cout<<"      * "<<endl;
   cout<<"  ***** "<<endl;
   cout<<endl;
}

void printN()
{
   cout<<"  *   *  "<<endl;
   cout<<"  **  *  "<<endl;
   cout<<"  * * *  "<<endl;
   cout<<"  *  **  "<<endl;
   cout<<"  *   *  "<<endl;
   cout<<endl;
}

int main() {
   printH();
   printA();
   printS();
   printS();
   printA();
   printN();

   return 0;
}

