#include<iostream>
#include<windows.h>
using namespace std;
void roses();
main()
{
 roses();
}
void roses()
{
 float red_rose=2.00;
 int no_of_red_roses;
 float white_rose=4.10;
 int no_of_white_roses;
 float tulips=2.50;
 int no_of_tulips;
 float original_price;
 float discount_price;
 cout<<"enter no. of red roses";
 cin>>no_of_red_roses;
 cout<<"enter no. of white roses";
 cin>>no_of_white_roses;
 cout<<"enter no. of tulips";
 cin>>no_of_tulips;
 original_price=no_of_red_roses*red_rose+no_of_white_roses*white_rose+no_of_tulips*tulips;
 cout<<"original price"<<original_price<<endl;
 if(original_price>200.0)
{
 discount_price=original_price-(original_price*20.0/100.0);
  cout<<"price after discount"<<discount_price;
}}