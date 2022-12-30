#include<iostream>
using namespace std;

void flower(int,int,int);

main()
{
int noofred;
int noofwhite;
int nooftulip;

cout<<"Enter no of red roses: "<<endl;
cin>>noofred;
cout<<"Enter no of white roses: "<<endl;
cin>>noofwhite;
cout<<"Enter no of tulips: "<<endl;
cin>>nooftulip;

flower(noofred,noofwhite,nooftulip);
}

void flower(int noofred,int noofwhite,int nooftulip)
{
	float totalred;
	float totalwhite;
	float totaltulip;
	float totalprice;
	float discountprice;
	totalred=noofred*2.0;
	totalwhite=noofwhite*4.10;
	totaltulip=nooftulip*2.50;
	totalprice=totalred+totalwhite+totaltulip;
	discountprice=totalprice*0.8;
	cout<<"Total price is: "<<totalprice<<endl;
	if(totalprice>200)
	{
	  cout<<"The discounted price is :"<<discountprice;
	}
} 
