//Write a CPP program to accept two float values. Swap these values.
#include <iostream.h>
#include<conio.h>
void main()
{

// Variable definition:
int a,b,c;


clrscr();

cin>>a>>b;
c=a;
a=b;
b=c;
cout<<endl<<a<<endl<<b;
getch();
}