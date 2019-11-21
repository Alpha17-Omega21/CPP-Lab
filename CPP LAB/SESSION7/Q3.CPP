/*
Write a C++ program to find out the sum of N numbers, by defining proper class, constructor
and methods.
*/

#include<iostream.h>
#include<conio.h>
class math
{
	int num[200],temp,sum;
	public:
	math(int a)
	{
		temp=a;
		sum=0;
	}
	void accept()
	{
		cout<<"Enter any "<<temp<<" numbers to find out their total sum:- "<<endl;
		for(int i=0;i<temp;i++)
		{
			cin>>num[i];
		}
	}
	void display()
	{
		for(int i=0;i<temp;i++)
		{
			sum=sum+num[i];
		}
		cout<<endl<<"The sum of the entered "<<temp<<" numnbers are "<<sum;
	}
};
void main()
{
	int num;
	clrscr();
	cout<<"Enter how many numbers you need :- ";
	cin>>num;
	math x(num);
	x.accept();
	x.display();
	getch();
}
