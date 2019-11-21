/*Write and test a program to create a class ‘Shapes’ with member function to find area of triangle, rectangle and circle .
Using constructor overloading.
 Assume:  Sides of triangle = 3.2, 4.0 and 5.1
 Length and breadth of rectangle = 15.0 and 20.0
 Radius of circle = 5.2
 It should also have a destructor to give the message "Done. Thank you." */
 #include<iostream.h>
 #include<conio.h>
 #include<math.h>
 #include<stdlib.h>
 class Shapes
 {
	private:
    double a,b,c,d,e,f,s,z;
    public:
    Shapes(float x,float y,float z)
	{
		a=x;
		b=y;
		c=z;
	}
    Shapes(float x,float y)
    {
		d=x;
		e=y;
	}
     Shapes(float x)
     {
		 f=x;
	 }
    ~Shapes()
	{
		cout<<"Done. Thank you."<<endl;
		getch();
		exit (0);
	}
	void triangle()
	{
		s=(a+b+c)/2;
		a=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"The area of the triangle is :"<<a<<endl;
	}
	void rectangle()
	{
		cout<<"The area of the rectangle is :"<<d*e<<endl;
	}
	void radius()
	{
		double p=3.14;
		z=p*f*f;
		cout<<"The area of the circle is :"<<z<<endl;
	}
 };
 void main()
 {
	 clrscr();
	 Shapes p(3.2,4.0,5.1), q(15.0,20.0),r(5.2);
	 p.triangle();
	 q.rectangle();
	 r.radius();
 }
 
