#include<iostream>
#include<windows.h>

void gotoxy(int x,int y);
void printmaze();
void playermove(int x,int y);
using namespace std;

main()
{
  system("cls");
  printmaze();
  int x = 3;
  int y = 3;
  playermove(x,y);
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
void playermove(int x,int y)
{
gotoxy(x-1,y);
cout<<" ";
gotoxy(x,y);
cout<<"p";
Sleep(200);
}