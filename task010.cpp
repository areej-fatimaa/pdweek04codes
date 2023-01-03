#include<iostream>
#include<windows.h>
using namespace std;
void airlinesystem();
main()
{
while(true)
{
 airlinesystem();
}}
 void airlinesystem()
{
  string country;
  int price;
  int final_price;
  cout<<"enter country name";
  cin>>country;
  cout<<"enter pricr in dollers";
  cin>>price;
  if(country=="pak")
{
  final_price=price-(price*5/100);
  cout<<"price after discount is"<<final_price;
}
 if(country=="ireland")
{
 final_price=price-(price*10/100);
 cout<<"price after discount is"<<final_price;
}
 if(country=="india")
{
 final_price=price-(price*20/100);
 cout<<"price after discount is"<<final_price;
}
 if(country=="england")
{
 final_price=price-(price*30/100);
 cout<<"price after discount is"<<final_price;
}
 if(country=="canada")
{
 final_price=price-(price*45/100);
 cout<<"price after discount is"<<final_price;
}}