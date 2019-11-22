/*Write a program to find all the divisors of an integer n using function.
(Example: Divisors of 6 are 1, 2, 3) Use while loop*/
#include<iostream.h>
#include<conio.h>
void divisor(int);
void main()
{
	int x;
	clrscr();
	cout<<"Enter any number:";
	cin>>x;
	divisor(x);
	getch();
}
void divisor(int x)
{
	int i=1;
	while(i<6)
	{
		if(x%i==0)
		{
			cout<<""<<i<<",";
		}
		i++;
	}
}