#include<iostream>
using namespace std;
void equal(int num1,int num2 );
 main()
{
  int num1,num2;
  cout<<"Enter first number: ";
  cin>>num1;
  cout<<"Enter second number: ";
  cin>>num2;
  equal(num1,num2);
}
void equal(int num1,int num2)
  {
    if(num1>num2)
    {
      cout<<"false";
    }
    if(num1==num2)
    {
      cout<<"true";
    }
    if(num1<num2)
    {
      cout<<"false";
    }
  }
