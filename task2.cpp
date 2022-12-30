#include<iostream>
#include<windows.h>

void gotoxy(int x,int y);
void printmaze();
using namespace std;

main()
{
  system("cls");
  printmaze();
  
}
void printmaze()
  {
    cout<<"##############################"<<endl;
    cout<<"#                            #"<<endl;
    cout<<"#                            #"<<endl;
    cout<<"#                            #"<<endl;
    cout<<"#                            #"<<endl;
    cout<<"#                            #"<<endl;
    cout<<"#                            #"<<endl;
    cout<<"#                            #"<<endl;
    cout<<"#                            #"<<endl;
    cout<<"#                            #"<<endl;
    cout<<"#                            #"<<endl;
    cout<<"##############################"<<endl;
  }
void gotoxy(int x,int y)
  {
    COORD coordinates;
    coordinates.X= x;
    coordinates.Y= y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
  }