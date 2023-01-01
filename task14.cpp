#include <iostream>
#include <windows.h>
 
using namespace std;

void aggregate(string name, float matricmarks, float intermarks, float ecatmarks, float matricpercent, float percent, float ecatpercent, float aggregate);
void gotoxy(int x, int y);
void graphics(int x, int y, string choice);


main()
{

  system("cls");
  

  string choice;
  int x=0;
  int y=0;
  string name;
  string anykey;
  float matricmarks;
  float intermarks; 
  float ecatmarks;
  float matricweight;
  float interweight;
  float ecatweight;
  float aggregate1=0;
  float aggregate2=0;
 
  while(true)
  {
    gotoxy(x, y);
  
    graphics(x, y, choice);
  
  
    cout<<"Please enter your choice"<<endl;
    cin >> choice;
  
    if (choice=="1")
    {
      system("cls");
      aggregate(name, matricmarks, intermarks, ecatmarks, matricweight, interweight, ecatweight, aggregate1);
      graphics(x, y, choice);
  
    }
    if (choice=="2")
    {
      system("cls");
      aggregate(name, matricmarks, intermarks, ecatmarks, matricweight, interweight, ecatweight, aggregate2);
      graphics(x, y, choice);

    }
    if (choice =="3")
    {
      system("cls");
      cout<<"Student 1 has aggregate: "<<aggregate1;
      cout<<"Press any key to continue: ";
      cin>>anykey;
      graphics(x, y, choice);
    }
    if (choice =="4")
    {
      system("cls");
      cout<<"Student 2 has aggregate: "<<aggregate2;
      cout<<"Press any key to continue: ";
      cin>>anykey;
      graphics(x, y, choice);
    }
    
  }



}





void aggregate(string name, float matricmarks, float intermarks, float ecatmarks, float matricweight, float interweight, float ecatweight, float aggregate)


{

  cout << "Please enter your name" << endl;
  cin >> name;

  cout <<"Enter your matric marks" << endl;
  cin >> matricmarks;

  cout <<"Enter your inter marks" << endl;
  cin >> intermarks;


  cout <<"Enter your ecat marks" << endl;
  cin >> ecatmarks;


  
  matricweight = (matricmarks/110000)/3000;
  interweight = (intermarks/55000)/3000;
  ecatweight = (ecatmarks/40000)/4000;

  aggregate = matricweight+ecatweight+interweight;
  

}



void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void graphics(int x, int y, string choice)

{
  
  
  gotoxy(x, y);
  
  cout<<"#############################"<<endl;
  cout<<"#                           #"<<endl;
  cout<<"#                           #"<<endl;
  cout<<"#        UET Lahore         #"<<endl;
  cout<<"#                           #"<<endl;
  cout<<"#                           #"<<endl;
  cout<<"#############################"<<endl;
  gotoxy(x, 11);

  cout<<"Welcome to UET Lahore"<<endl;
  gotoxy (x, 15);
  
  cout<<"Press 1 to enter details of student 1"<<endl;
  cout<<"Press 2 to enter details of student 1"<<endl;
  cout<<"Press 3 to calculate aggregate of first student"<<endl;
  cout<<"Press 4 to calculate aggregate of second student"<<endl;
  
  

  
}


