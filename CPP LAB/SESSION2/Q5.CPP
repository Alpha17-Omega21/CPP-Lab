//Write a unit-conversion program to convert inches to centimeters.
#include <iostream.h>
#include<conio.h>
void main()
{

// Variable definition:
float inch,centimeter;

clrscr();
cout<<"Enter the desired inch value to convert it to centimeter."<<endl;
cin>>inch;
centimeter=inch*2.54;

cout<<endl<<inch<<" inch = "<<centimeter<<" centimeter"<<endl;

getch();
}