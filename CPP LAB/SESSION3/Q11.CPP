/*Write a C++ program to generate the Fibonacci series.*/
#include<iostream.h>
#include<conio.h>
void main()
{
	int x=0,y=1,i=3,n,z;
	clrscr();
	cout<<"Enter any number:";
	cin>>n;
	cout<<"the Fibonacci series are "<<x<<","<<y<<",";
	while(i<=n)
	{
		z=x+y;
		i++;
		cout<<""<<z;
		if(i<=n)
		  cout<<",";

		x=y;
		y=z;
	}
	getch();
}