 /*2. Create a class called base with private variable ‘a’ and private functions - accept () and
display() to accept and display value of ‘a’. Declare class der as a friend class in class base. In
class der, create public function der1(). In der1(), check if the accepted number ‘a’ is odd or
even. Using above classes, write main ()*/

# include <iostream.h>//library header
#include<conio.h>//library header

class base //class declaration
{
	int a;//variable declaration
	void accept() //function
	{
		cout<<"Enter a value of 'a' : "; //prompt
		cin>>a;//input
	}
	void display() //function
	{
		cout<<"The value of 'a' : "<<a<<endl; //prompt
	}
	friend class der; //friend class declaration
};

class der //class declaration
{
	int n,temp;//variable declaration
	public: //access specifier
	void der1()//function
	{
		base x;  //object declaration of the class base
		x.accept(); //function execution
		x.display(); //function execution
		if(x.a%2==0)//if condition
		{
			cout<<"\nThe number '"<<x.a<<"' is even."; //prompt
		}
		else
			cout<<"\nThe number '"<<x.a<<"' is odd."; //prompt
	}
};

void main()//main function
{
	
	clrscr();

	der y; //object declaration of the class der
	y.der1(); //function execution

	getch();
}
