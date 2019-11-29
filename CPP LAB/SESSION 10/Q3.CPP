/*Create a class called test with a private variable-k and private function add(). Initialise the
value of k. In add(), accept a number and add that to k. Base is a friend class of test. In the
class base, create a public function mul() which accepts number and multiplies that number
with k. Write a suitable main().*/

# include <iostream.h> //library header
#include <conio.h> //library header

class test //class declaration
{
	int k,b; //variable declaration
	int add()//function declaration
	{
		k=10;
		cout<<"k=10"<<endl; //prompt
		cout<<"\nEnter any number : "; //prompt
		cin>>b; //input
		
		return k+b; //returns the value
	}
	friend class base; //friend class declaration
};

class base //class declaration
{
	int n,t; //variable declaration
	public: //access specifier
	int mul() //function declaration
	{
		test obj; //object declaration of the class test
		cout<<"Added to k gives : "<<obj.add();  //prompt
		cout<<"\n\nEnter any number :"; //prompt
		cin>>n; //input
		obj.k=obj.k*n;
		return obj.k;//returns the vaalue
	}
};

void main() //main function
{

	clrscr(); //clears the screen

	base x; //object declaration of the class base
	cout<<"Multiply by k :"<<x.mul(); //prompt

	getch();
}
