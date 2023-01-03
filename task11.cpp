#include<iostream>
#include<windows.h>
using namespace std;
void carSpeed();
main()
{
 carSpeed();
}
void carSpeed()
{
 int speed;
 cout<<"enter speed of car";
 cin>>speed;
 if(speed>100)
 {
  cout<<"halt...YOU WILL BE CHALLANGED!!!";
 }
 if(speed<=100)
 {
  cout<<"Perfect! You're going good.";
 }} 