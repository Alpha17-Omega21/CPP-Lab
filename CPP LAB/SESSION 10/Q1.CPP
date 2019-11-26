
/*1. Create a class called base with private variable ‘m’. Accept value of ‘m’.
Declare a friend class der. In der class, declare private variable ‘n’ and public function sum ().
In sum (), accept value ‘n’, and find sum of m and n. Print the result.
Using above classes, write a main (), to accept two values and find sum and print the result.*/

#include <iostream.h> //library header
#include<conio.h>//library header

class base //class creation
{
	int m; //variable delclaration
	public: //access specifiers
	base(int a) //constructor
	{
		m=a; //variable assignaation
	}
	friend class der; // make friends with the class der
};

class der //class creation
{
	int n,temp; //variable delclaration
	public: /* //access specifiers
	der(int m){

		base w(m);
		temp=w.q;
	}                */
	int sum(int b, int q)
	{
		base w(q);
		temp=w.m;
		n=b;
		return temp+n; //returns the value
	}
};

void main()  //main function
{
	int m,n;
	clrscr();

    cout<<"Enter any two integers :"<<endl; //output
    cin>>m>>n; //input



	der x; //object creation

	cout<<"Sum of two integers :"<<x.sum(n,m); //output

	getch();

