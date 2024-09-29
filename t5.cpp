#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y) {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printH(int x, int y)
{
  gotoxy(x,y);   cout<<" *   * ";
  gotoxy(x,y+1); cout<<" *   * ";
  gotoxy(x,y+2); cout<<" ***** ";
  gotoxy(x,y+3); cout<<" *   * ";
  gotoxy(x,y+4); cout<<" *   * ";
}
 
void printA(int x, int y)
{
  gotoxy(x,y);   cout<<"    *   ";
  gotoxy(x,y+1); cout<<"   * *  ";
  gotoxy(x,y+2); cout<<"  ***** ";
  gotoxy(x,y+3); cout<<"  *   * ";
  gotoxy(x,y+4); cout<<"  *   * ";
}

void printM(int x, int y)
{
  gotoxy(x,y);   cout<<"  *   * ";
  gotoxy(x,y+1); cout<<"  ** ** ";
  gotoxy(x,y+2); cout<<"  * * * ";
  gotoxy(x,y+3); cout<<"  *   * ";
  gotoxy(x,y+4); cout<<"  *   * ";
}

void printZ(int x, int y)
{
  gotoxy(x,y);   cout<<"  *****  ";
  gotoxy(x,y+1); cout<<"     *   ";
  gotoxy(x,y+2); cout<<"    *    ";
  gotoxy(x,y+3); cout<<"   *     ";
  gotoxy(x,y+4); cout<<"  *****  ";
}

void printBigName() {
      int x = 30, y = 10;
      printH(x, y);
      printA(x + 7, y);
      printM(x + 14, y);
      printZ(x + 21, y);
      printA(x + 28, y);
}

int main() {
     system("cls");
     printBigName();
     
     return 0;
}

