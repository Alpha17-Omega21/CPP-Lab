/*
Write a C++ program to find out the sum of N numbers, by defining proper class, constructor
and methods.
*/

#include<iostream.h>//library header
#include<conio.h>//library header
class math //class creation
{
	int num[200],temp,sum;//declares the variables
	public:
	math(int a)//constructors
	{
		temp=a;//intialization
		sum=0;//intialization
	}
	void accept()
	{
		cout<<"Enter any "<<temp<<" numbers to find out their total sum:- "<<endl;//output
		for(int i=0;i<temp;i++)
		{
			cin>>num[i];//input
		}
	}
	void display()
	{
		for(int i=0;i<temp;i++)
		{
			sum=sum+num[i];//input
		}
		cout<<endl<<"The sum of the entered "<<temp<<" numnbers are "<<sum;//output
	}
};
void main()
{
	int num;//declares the variables
	clrscr();
	cout<<"Enter how many numbers you need :- ";//output
	cin>>num;//input
	math x(num);
	x.accept();//goes to the accept() in class math
	x.display();//goes to the accept() in class math
	getch();
}
