#include<iostream>
#include<windows.h>

void gotoxy(int x,int y);
using namespace std;

main()
{
  system("cls");
  gotoxy(55,10);
  cout<<"    ####         ##    #                     #           #                          ";
  gotoxy(55,11);
  cout<<"    #   ###     #  #   #                    # #          #                          ";
  gotoxy(55,12);
  cout<<"    #     ##     ##    #                   #   #         #                          ";
  gotoxy(55,13);
  cout<<"    #   ###            #                  #     #        #                          ";
  gotoxy(55,14);
  cout<<"    ####         #     #                 #       #       #                          ";
  gotoxy(55,15);
  cout<<"    #   ###      #     #                ###########      #                          ";
  gotoxy(55,16);
  cout<<"    #     ###    #     #               #           #     #                          ";
  gotoxy(55,17);
  cout<<"    #       ##   #     #              #             #    #                          ";
  gotoxy(55,18);
  cout<<"    #     ###    #     #             #               #   #                          ";
  gotoxy(55,19);
  cout<<"    #######      #     ############ #                 #  ##############             ";
}

void gotoxy(int x,int y)
  {
    COORD coordinates;
    coordinates.X= x;
    coordinates.Y= y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
  }
