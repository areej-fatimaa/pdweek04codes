#include<iostream>
#include<windows.h>
using namespace std;
void tf();
main()
{
 tf();
}
void tf()
{
 string str;
 cout<<"enter name";
 cin>> str;
 if(str=="true")
 {
  cout<<"false";
 }
 if(str=="false")
 {
 cout<<"true";
 }
}