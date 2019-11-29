
/*1. Create a class called base with private variable ‘m’. Accept value of ‘m’.
Declare a friend class der. In der class, declare private variable ‘n’ and public function sum ().
In sum (), accept value ‘n’, and find sum of m and n. Print the result.
Using above classes, write a main (), to accept two values and find sum and print the result.*/

# include <iostream.h>//library header
#include<conio.h>//library header

class base//class declaration
{
	int m;//variable declaration
	public://access specifier
	void accept()//function
	{
		cout<<"Enter any two integers :"<<endl;//prompt
		cin>>m; //input
	}
	friend class der;//friend class declaration
};

class der//class declaration
{
	int n;//variable declaration
public://access specifier
	void sum()//function
	{
		base obj;//object declaration of the class base
		obj.accept();//function execution
		cin>>n; //input
		cout<<"\n Sum of two integers : "<<obj.m+n;//prompt
	}
};

void main()//main function
{
	der y;//object declaration of the class der
	clrscr();
y.sum();//function execution
	getch();
}
