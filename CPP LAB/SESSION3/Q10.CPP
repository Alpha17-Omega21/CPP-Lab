/*Write a C++ program using nested loops to print the following by reading
number of rows to be printed from the user
Eg: Number of rows= 5
Output is:
*
* *
* * *
* * * *
* * * * * */

#include<iostream.h>
#include<conio.h>
void main()
{
	int x,i,j;
	clrscr();
	cout<<"Enter the number of rows=";
	cin>>x;
	for(i=0;i<x;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	getch();
}