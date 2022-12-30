#include <iostream>
#include <windows.h>
using namespace std;

void discount1(string,float);



main()
{
	string country;
	float dollar;
	while(true)
	{
	  cout<<"Enter name of country";
	  cin>>country;
	  cout<<"Enter ticket price in dollars";
	  cin>>dollar;
	  discount1(country,dollar);
	}

}


void discount1(string country,float dollar)
{
	float result;
	float discount;
	if(country=="pakistan")
	{
	discount=dollar*0.05;
	result=dollar-discount;
	cout<<"The Final Price is : "<<result<<endl;
	}

	if(country=="ireland")
	{
	discount=dollar*0.1;
	result=dollar-discount;
	cout<<"The Final Price is :"<<result<<endl;
	}

	if(country=="india")
	{
	discount=dollar*0.2;
	result=dollar-discount;
	cout<<"The Final Price is :"<<result<<endl;
	}

	if(country=="england")
	{
	discount=dollar*0.3;
	result=dollar-discount;
	cout<<"The Final Price is :"<<result<<endl;
	}

	if(country=="canada")
	{
	discount=dollar*0.45;
	result=dollar-discount;
	cout<<"The Final Price is :"<<result<<endl;
	}

}


