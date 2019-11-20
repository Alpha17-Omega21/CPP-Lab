/*1. Create a class called base with private variable ‘m’. Accept value of ‘m’.
Declare a friend class der. In der class, declare private variable ‘n’ and public function sum ().
In sum (), accept value ‘n’, and find sum of m and n. Print the result.
Using above classes, write a main (), to accept two values and find sum and print the result.*/
# include <iostream.h>
#include<conio.h>

class base
{
	int m;
	base( int a)
	{
		m=a;
	}
	friend class der;
};

class der
{
	int n;
	public:
	int sum( int b)
	{
		n=b;
		return m+n;
	}
};

void main()
{    
	int m,n;
	clrscr();
	
    cout<<"Enter any two integers :"<<endl;
    cin>>m>>n;
       
	base y(m);
	
	der x(n);
	
	cout<<"Sum of two integers :"<<x.sum();
	
	getch();
}