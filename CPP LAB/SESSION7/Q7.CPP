/*Write and test a program to create a class ‘Shapes’ with member function to find area of triangle, rectangle and circle .
Using constructor overloading.
 Assume:  Sides of triangle = 3.2, 4.0 and 5.1
 Length and breadth of rectangle = 15.0 and 20.0
 Radius of circle = 5.2
 It should also have a destructor to give the message "Done. Thank you." */
 #include<iostream.h>//library header
 #include<conio.h>//library header
 #include<math.h>//library header
 #include<stdlib.h>//library header
 class Shapes //class creation
 {
	private://access specifiers
    double a,b,c,d,e,f,s,z; //variable declaration
    public://access specifiers
    Shapes(float x,float y,float z)//constructor overloading
	{
		a=x;//intialization
		b=y;//intialization
		c=z;//intialization
	}
    Shapes(float x,float y)//constructor overloading
    {
		d=x;//intialization
		e=y;//intialization
	}
     Shapes(float x)//constructor overloading
     {
		 f=x;//intialization
	 }
    ~Shapes() //destructor
	{
		cout<<"Done. Thank you."<<endl;//prompt at the end of the main() program
		getch();
		exit (0);
	}
	void triangle()
	{
		s=(a+b+c)/2;//assigns the value
		a=sqrt(s*(s-a)*(s-b)*(s-c));//assigns the value
		cout<<"The area of the triangle is :"<<a<<endl;//prompt
	}
	void rectangle()
	{
		cout<<"The area of the rectangle is :"<<d*e<<endl;//prompt
	}
	void radius()
	{
		double p=3.14;
		z=p*f*f;//assigns the value
		cout<<"The area of the circle is :"<<z<<endl;//prompt
	}
 };
 void main()
 {
	 clrscr();
	 Shapes p(3.2,4.0,5.1), q(15.0,20.0),r(5.2);//sends the values to their own respective constructors
	 p.triangle();//class member function execution
	 q.rectangle();//class member function execution
	 r.radius();//class member function execution
 }
 
