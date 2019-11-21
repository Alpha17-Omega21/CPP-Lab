//Write a program to find the sum of first n natural numbers. Sn=n*(n+1)/2
#include <iostream.h>
#include<conio.h>
void main()
{

// Variable definition
float num,sum;

clrscr();
cout<<"Enter any natural number"<<endl;
cin>>num;
sum=num*(num+1)/2;

cout<<endl<<"The sum of first "<<num<<" natural number is "<<sum<<endl;

getch();
}