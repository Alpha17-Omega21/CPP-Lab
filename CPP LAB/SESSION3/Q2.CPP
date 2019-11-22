//Write a C++ program to accept an integer. Find if it is a positive number or negative number. Use Conditional operator
#include <iostream.h>
#include<conio.h>
void main()
{

// Variable definition:
int num;


clrscr();
cout<<"Enter any number to know whether it's positive or negative."<<endl;
cin>>num;
cout<<endl;
(num>0)? cout<<"The number "<<num<<" is positive." :cout<<"The number "<<num<<" is negative.";
getch();
}