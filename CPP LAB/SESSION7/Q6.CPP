/*Create a class called overload with public functions 

i) to add three numbers (3,4,2) 
ii) to multiply two numbers (5,2)
 
Use destructor to display a message "End of the program", Use constructor overloading. 
*/
 
#include<iostream.h>//ibrary header
 #include<conio.h>//ibrary header
 #include<stdlib.h>//ibrary header
 class OverLoad//class creation
 {
	private://access specifier
	int a,b,c;//variable declaration
	public://access specifier
    OverLoad(int x,int y,int z)//constructor
	{
		a=x;//intialization
		b=y;//intialization
		c=z;//intialization
	}
	OverLoad(int x1,int y1)//constructor
	{
		a=x1;//intialization
		b=y1;//intialization
	}
       ~OverLoad()//destructor
	{
		cout<<"End of the program";//prompt at the end of the main() program
		getch();
		exit(0);
	}
    void add()
    {
	   cout<<"The sum of these three numbers are :"<<a+b+c<<endl;//prompt
    }
	void mult()
	{
		cout<<"The product of these two numbers are:"<<a*b<<endl;//prompt
	}

 };
 void main()
 {
	 clrscr();
	 OverLoad c(3,4,2);//sends the value to the constructors
	 OverLoad v(5,2);//sends the value to the constructors
	 c.add();
	 v.mult();

 }
