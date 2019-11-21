/*Write a C++ program to find the factorial of a given number. Use do-while*/

#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,fact=1;
	clrscr();
	cout<<"Enter any number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
		cout<<"Factorial="<<fact;
	getch();
}