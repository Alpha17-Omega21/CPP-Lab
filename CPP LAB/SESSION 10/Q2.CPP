/*2. Create a class called base with private variable ‘a’ and private functions - accept () and
display() to accept and display value of ‘a’. Declare class der as a friend class in class base. In
class base, create public function der (). In der(), check if the accepted number ‘a’ is odd or
even. Using above classes, write main ()*/
# include <iostream.h>
#include<conio.h>

class base
{
	int a;
	void accept()
	{
		cout<<"Enter a value of 'a' : ";
		cin>>a;
	}
	void display()
	{
		cout<<"The value of 'a' : "<<a<<endl;
	}
	friend class der;
};

class der
{
	int n,temp;
	public: 
	void check()
	{
		base w;
		w.accept();
		w.display();
		if(w.a%2==0)
		{
			cout<<"\nThe accepted number '"<<w.a<<"' is even.";
		}
		else
			cout<<"\nThe accepted number '"<<w.a<<"' is odd.";
	}
};

void main()
{
	
	clrscr();

	der x;
	x.check();

	getch();
}