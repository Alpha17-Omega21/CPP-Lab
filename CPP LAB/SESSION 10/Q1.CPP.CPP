/*1. Create a class called base with private variable ‘m’. Accept value of ‘m’.
Declare a friend class der. In der class, declare private variable ‘n’ and public function sum ().
In sum (), accept value ‘n’, and find sum of m and n. Print the result.
Using above classes, write a main (), to accept two values and find sum and print the result.*/
# include <iostream.h>
#include<conio.h>

class base
{
	int m;
	public:
	base(int a)
	{
		m=a;
	}
	friend class der;
};

class der
{
	int n,temp;
	public: /*
	der(int m){

		base w(m);
		temp=w.q;
	}                */
	int sum(int b, int q)
	{
		base w(q);
		temp=w.m;
		n=b;
		return temp+n;
	}
};

void main()
{
	int m,n;
	clrscr();

    cout<<"Enter any two integers :"<<endl;
    cin>>m>>n;



	der x;

	cout<<"Sum of two integers :"<<x.sum(n,m);

	getch();
}