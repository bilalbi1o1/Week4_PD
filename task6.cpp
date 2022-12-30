#include<iostream>
#include<windows.h>
void gotoxy(int x,int y);
void A();
void W();
void I();
void S();

using namespace std;

main()
{
  system("cls");
  A();
    gotoxy(0,6);
  W();
    gotoxy(0,12);
  A();
    gotoxy(0,18);
  I();
    gotoxy(0,24);
  S();

}

void gotoxy(int x,int y)
  {
    COORD coordinates;
    coordinates.X= x;
    coordinates.Y= y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
  }
void A()
  {
  cout<<"    #      "<<endl;
  cout<<"   # #     "<<endl;
  cout<<"  #####    "<<endl;
  cout<<" #     #   "<<endl;
  }

void W()
  {
   cout<<" #   #   # "<<endl;
   cout<<" #  # #  # "<<endl;
   cout<<" # #   # # "<<endl;
   cout<<" ##     ## "<<endl;
  }

void I()
  {
   cout<<" #####    "<<endl;
   cout<<"   #      "<<endl;
   cout<<"   #      "<<endl;
   cout<<" #####    "<<endl;
  }
void S()
  {
   cout<<"  ###     "<<endl;
   cout<<" ##       "<<endl;
   cout<<"   E#     "<<endl;
   cout<<" ###      "<<endl;
  }