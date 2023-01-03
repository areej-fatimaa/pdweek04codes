#include<iostream>
#include<windows.h>
using namespace std;
 void printMenue();
 void calculateAggregate1();
 void calculateAggregate2();
 void compareMarks();
 main()
{
printMenue();
 calculateAggregate1();
 calculateAggregate2();
compareMarks();
}
 void printMenue()
{
 cout<<"*****************************************************" <<endl;
cout<<"*                                                   *" <<endl;
cout<<"*       University Managrment System                *" <<endl;
cout<<"*                                                   *" <<endl;
cout<<"*                                                   *" <<endl;
cout<<"*                                                   *" <<endl;
cout<<"*                                                   *" <<endl;
cout<<"*                                                   *" <<endl;
cout<<"*                                                   *" <<endl;
cout<<"*                                                   *" <<endl;
cout<<"*****************************************************" <<endl;
}
void calculateAggregate1()
{
 string name;
int obt_matric_marks;
int obt_inter_marks;
int obt_ecat_marks;
float total_matric_marks=1100.0;
float total_inter_marks=1100.0;
float total_ecat_marks=400.0;
float weightage_of_matric;
float weightage_of_inter;
float weightage_of_ecat;
float per_of_matric;
float per_of_inter;
float per_of_ecat1;
float aggregate1;
cout<<"enter name";
cin>>name;
cout<<"enter matric marks";
cin>>obt_matric_marks;
cout<<"enter intermediate marks";
cin>>obt_inter_marks;
cout<<"enter ecat marks";
cin>>obt_ecat_marks;
per_of_matric=obt_matric_marks/ total_matric_marks*100;
per_of_inter=obt_inter_marks/ total_inter_marks*100;
per_of_ecat1=obt_ecat_marks/ total_ecat_marks*100;
weightage_of_matric=per_of_matric*10/100;
weightage_of_inter=per_of_inter*40/100;
weightage_of_ecat=per_of_ecat1*50/100;
aggregate1=weightage_of_matric+weightage_of_inter+weightage_of_ecat;
cout<<"aggregate is"<<aggregate1;
}
void calculateAggregate2()
{
 string name;
int obt_matric_marks;
int obt_inter_marks;
int obt_ecat_marks;
float total_matric_marks=1100.0;
float total_inter_marks=1100.0;
float total_ecat_marks=400.0;
float weightage_of_matric;
float weightage_of_inter;
float weightage_of_ecat;
float per_of_matric;
float per_of_inter;
float per_of_ecat2;
float aggregate2;
cout<<"enter name";
cin>>name;
cout<<"enter matric marks";
cin>>obt_matric_marks;
cout<<"enter intermediate marks";
cin>>obt_inter_marks;
cout<<"enter ecat marks";
cin>>obt_ecat_marks;
per_of_matric=obt_matric_marks/ total_matric_marks*100;
per_of_inter=obt_inter_marks/ total_inter_marks*100;
per_of_ecat2=obt_ecat_marks/ total_ecat_marks*100;
weightage_of_matric=per_of_matric*10/100;
weightage_of_inter=per_of_inter*40/100;
weightage_of_ecat=per_of_ecat2*50/100;
aggregate2=weightage_of_matric+weightage_of_inter+weightage_of_ecat;
cout<<"aggregate is"<<aggregate2;
}
 void compareMarks()
{ 
 string stu1Name;
 string stuName2;
 int ecatMarksStu1;
 int ecatMarksStu2;
 cout<<"first student name";
 cin>>stu1Name;
 cout<<"second student name";
 cin>>stuName2;
 cout<<"enter ecat marks of student 1";
 cin>>ecatMarksStu1;
 cout<<"enter ecat marks of student 2";
 cin>>ecatMarksStu2;
 if(ecatMarksStu1>ecatMarksStu2)
{
 cout<<"roll no 1 is:"<<stu1Name;
}
if(ecatMarksStu1<ecatMarksStu2)
{
 cout<<"roll no 2 is"<<stuName2;
}}
 
 
 
 
 