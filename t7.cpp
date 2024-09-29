#include <iostream>
#include <windows.h>
using namespace std;

 void gotoxy(int,int);
 void move(int ,int );
 void printmaze();

int main()
{
   	int x=10,y=1;
	system("cls");
	printmaze();
	while (true)
	{
	move(x,y);
	y=y+1;
	if (y==8)
	{
   		 y=1;

	}

	}
	gotoxy(0,10);

   	return 0;
}
void move(int x,int y){
    gotoxy(x,y);
    cout<<"P";
    Sleep(100);
    gotoxy(x,y);
    cout<<" ";
}
void printmaze()

{

cout << "#######################" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#######################" << endl;

}


void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}




