/*Create a class called overload with public functions i) to add three numbers (3,4,2) ii) to multiply two numbers (5,2)
 Use destructor to display a message “End of the program”. Use constructor overloading. */
 #include<iostream.h>
 #include<conio.h>
 #include<stdlib.h>
 class overload1
 {
	private:
	int a,b,c;
	public:
    overload1(int x,int y,int z)
	{
		a=x;
		b=y;
		c=z;
	}
	overload1(int x,int y)
	{
		a=x;
		b=y;
	}
       ~overload1()
	{
		cout<<"End of the prgram";
		getch();
		exit(0);
	}
    void add()
    {
	   cout<<"The sum of these three numbers:"<<a+b+c<<endl;
    }
	void mult()
	{
		cout<<"The product of these two numbers:"<<a*b<<endl;
	}

 };
 void main()
 {
	 clrscr();
	 overload1 c(3,4,2);
	 overload1 v(5,2);
	 c.add();
	 c.mult();
       //	 getch();

 }