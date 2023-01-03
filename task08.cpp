#include<iostream>
#include<windows.h>
using namespace std;
void check();
main()
{
 check();
}
void check()
{
 int number1;
 int number2;
 cout<<"enter first no";
 cin >>number1;
 cout<<"enter second no";
 cin>>number2;
 if(number1!=number2)
 {
  cout<<"false"<<endl;
 }
 if(number1=number2)
 {
  cout<<"true";
 }
}