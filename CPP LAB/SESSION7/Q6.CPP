/*Create a class called overload with public functions i) to add three numbers (3,4,2) ii) to multiply two numbers (5,2)
 Use destructor to display a message “End of the program”. Use constructor overloading. */
 #include<iostream.h>
 #include<conio.h>
 #include<stdlib.h>
 class OverLoad
 {
	private:
	int a,b,c;
	public:
    OverLoad(int x,int y,int z)
	{
		a=x;
		b=y;
		c=z;
	}
	OverLoad(int x,int y)
	{
		a=x;
		b=y;
	}
       ~OverLoad()
	{
		cout<<"End of the prgram";
		getch();
		exit(0);
	}
    void add()
    {
	   cout<<"The sum of these three numbers are :"<<a+b+c<<endl;
    }
	void mult()
	{
		cout<<"The product of these two numbers are:"<<a*b<<endl;
	}

 };
 void main()
 {
	 clrscr();
	 OverLoad c(3,4,2);
	 OverLoad v(5,2);
	 c.add();
	 c.mult();
       //	 getch();

 }
