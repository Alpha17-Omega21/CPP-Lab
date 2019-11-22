//Write a program to accept length and breadth of rectangle and find its area and perimeter
#include <iostream.h>
#include<conio.h>
void main()
{

// Variable definition:
int l,b,area,perimeter;

clrscr();
cout<<"Enter the length of the rectangle."<<endl;
cin>>l;
cout<<"Enter the breadth of the rectangle."<<endl;
cin>>b;

area=l*b;
perimeter=2*(l+b);
cout<<endl<<"The area of the rectangle is "<<area<<endl;
cout<<"The perimeter of the rectangle is "<<perimeter<<endl;
getch();
}