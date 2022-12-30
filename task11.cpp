#include <iostream>
#include <windows.h>
using namespace std;

void speedcheck(float);



main()
{
	float speed;
	cout<<"Enter the speed : ";
	cin>>speed;
	speedcheck(speed);

}



void speedcheck(float speed)
{
	if(speed>100)
	{
	cout<<"Halt! You will be challaned..";
	}
	if(speed<=100)
	{
	cout<<"Perfect!  You are going GOOD..";
	}

}