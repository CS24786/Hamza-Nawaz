#include<iostream>
using namespace std;

void flowerShop(int redRose, int whiteRose, int tulip);

int main(){
    int redRose, whiteRose, tulip;
    cout<<"Enter the numbers of Red Roses: ";
    cin>>redRose;
    cout<<"Enter the numbers of White Roses: ";
    cin>>whiteRose;
    cout<<"Enter the numbers of Tulips: ";
    cin>>tulip;
    flowerShop(redRose,whiteRose,tulip);
    return 0;
}
void flowerShop(int redRose, int whiteRose, int tulip)
{
    double totalPrice;
    totalPrice = (redRose*2.00) + (whiteRose*4.10) + (tulip*2.50);
    if(totalPrice>200)
{
        cout<<"Orignal Price: $"<< totalPrice <<endl;
        cout<<"Price after Discount: $"<< totalPrice - (totalPrice*20/100);
}
    else
{
        cout<<"Orignal Price: $"<< totalPrice <<endl;
        cout<<"No discount price";
}
}













