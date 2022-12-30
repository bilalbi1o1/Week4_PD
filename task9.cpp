#include<iostream>
using namespace std;
void reverse(string enter);
main()
{
  string enter;
  cout<<"enter (true or false) ";
  cin>>enter;
  reverse(enter);
}
void reverse(string enter)
  {
    if(enter=="true")
    {
      cout<<"false";
    }
    if(enter=="false")
    {
      cout<<"true";
    }
  }