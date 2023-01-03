#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void nameA();
void nameW();
void nameI();
void nameS();
main()
{
  nameA();
  gotoxy(0,15);
  nameW();
  gotoxy(0,30);
  nameA();
  gotoxy(0,45);
  nameI();
  gotoxy(0,60);
  nameS();
  gotoxy(0,75);
 }
 void nameA()
 {
  cout<<"       **       "<<endl;
  cout<<"      ****      "<<endl;
  cout<<"     **  **     "<<endl;
  cout<<"    **    **    "<<endl;
  cout<<"   **********   "<<endl;  
  cout<<"  **        **  "<<endl;
  cout<<" **          ** "<<endl;
  cout<<"****        ****"<<endl;
 }
 void nameW()
 {
  cout<<" ****      **     **** "<<endl;
  cout<<"  **      ****     **  "<<endl;
  cout<<"  **     **  **    **  "<<endl;
  cout<<"  **    **    **   **  "<<endl;
  cout<<"  **   **      **  **  "<<endl;
  cout<<"  **  **        ** **  "<<endl;
  cout<<"  ** **          ****  "<<endl;
  cout<<"  ***             ***  "<<endl;
 }
 void nameI()
 {
  cout<<"      ************ "<<endl;
  cout<<"          ****     "<<endl;
  cout<<"          ****     "<<endl;
  cout<<"          ****     "<<endl;
  cout<<"          ****     "<<endl;
  cout<<"          ****     "<<endl;
  cout<<"          ****     "<<endl;
  cout<<"      ************ "<<endl;
 }
 void nameS()
 {
  cout<<"       ******************* "<<endl;
cout<<"      ****                   "<<endl;
cout<<"     ******                  "<<endl;   
cout<<"      ****                   "<<endl;       
cout<<"       *******************   "<<endl;
cout<<"                        **** "<<endl;
cout<<"                       ******"<<endl;
cout<<"                        **** "<<endl;
cout<<"       ********************  "<<endl;
}
 void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates .X=x;
 coordinates .Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) ,coordinates);
}



  
  
  