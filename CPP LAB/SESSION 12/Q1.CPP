 /* Create a class called add with two private variables. Accept values in these variables in the
	public function accept(). Display their sum in display() function. In the main () function,
	create an object of class add . Declare a pointer to the object. Using pointer accept, add
	and display the sum of 2 numbers. */

#include<iostream.h>
#include<conio.h>

class add
	{
     int a,b;
	 public:
     void accept()
		{
		 cout<<"Enter the first number : ";
		 cin>>a;
		 cout<<"Enter the second number : ";
		 cin>>b;
		 display();
		}
		
		void display()
		{
		 int sum=a+b;
		 cout<<"Sum of "<<a<<" and "<<b<<" = "<<sum<<endl;
		}
    
    };

	void main()
	{
	 clrscr();
   add s;
   add *ptr;
	ptr=&s;
    ptr->accept();
//	ptr->display();
	getch();
}
