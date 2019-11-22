//Write a unit-conversion program that takes the time in hours and converts to minutes.
#include <iostream.h>
#include<conio.h>
void main()
{

// Variable definition:
float hour,minutes;

clrscr();
cout<<"Enter the desired hour to convert it to minutes."<<endl;
cin>>hour;
minutes=hour*60;

cout<<endl<<hour<<" hour = "<<minutes<<" minutes"<<endl;

getch();
}