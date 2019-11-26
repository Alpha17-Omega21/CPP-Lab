 /*2. Create a class called base with private variable ‘a’ and private functions - accept () and
display() to accept and display value of ‘a’. Declare class der as a friend class in class base. In
class base, create public function der (). In der(), check if the accepted number ‘a’ is odd or
even. Using above classes, write main ()*/

#include <iostream.h> //library header
#include<conio.h> //library header

class base //class creation
{
	int a; //variable delclaration
	void accept()
	{
		cout<<"Enter a value of 'a' : ";  //output
		cin>>a; //input
	}
	void display()
	{
		cout<<"The value of 'a' : "<<a<<endl; //output
	}
	friend class der; // make friends with the class der
};

class der //class creation
{
	int n,temp; //variable delcaration
	public: //access specifiers
	void check() //funcction block
	{
		base w;
		w.accept();  //executes the function
		w.display(); //executes the function
		if(w.a%2==0) //condition checking
		{
			cout<<"\nThe accepted number '"<<w.a<<"' is even."; //output
		}
		else
			cout<<"\nThe accepted number '"<<w.a<<"' is odd."; //output
	}
};

void main() //main function
{
	
	clrscr();

	der x;
	x.check();

	getch();
}