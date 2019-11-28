/* Create a class called add with two private variables. Accept values in these variables in the
	public function accept(). Display their sum in display() function. In the main () function,
	create an object of class add . Declare a pointer to the object. Using pointer accept, add
	and display the sum of 2 numbers. */

#include<iostream.h> //library header
#include<conio.h> //library header

class add //class declaration
	{
     int a,b; //declaration of variables
	 public://access specifier
     void accept()  //function
		{
		 cout<<"Enter the first number : ";  //prompt
		 cin>>a; //input
		 cout<<"Enter the second number : "; //prompt
		 cin>>b; //input
		 display(); //Calling the function
		}
		
		void display() //function
		{
		 int sum=a+b;
		 cout<<"Sum of "<<a<<" and "<<b<<" = "<<sum<<endl; //prompt
		}

    };

	void main() //main function
	{
	 clrscr();

   add s;
   add *ptr;

	ptr=&s; //assigns the address of the object that points when called

    ptr->accept(); //pointed object

	getch();
}
