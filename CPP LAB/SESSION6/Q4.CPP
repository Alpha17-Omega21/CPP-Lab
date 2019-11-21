/*4. Write and test a CPP program using overloading, find area of triangle, rectangle and circle.
Assume: 
Sides of triangle = 3.2, 4.0 and 5.1
Length and breadth of rectangle = 15.0 and 20.0
Radius of circle = 5.2*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
class ar
{
	int i,d;
	public:
	void area(float a, float b, float c)
	{
		float ar,s,d;
		s=(a+b+c)/2;
		d=s*(s-a)*(s-b)*(s-c);
		ar=sqrt(d);
		cout<<"\nArea of the triangle= "<<ar;
	}
	void area(float l, float w)
	{
	    float ar;
		ar=l*w;
		cout<<"\nArea of the rectangle= "<<ar;
	}
	void area(float r)
	{
		float ar;
		ar=3.14*r*r;
		cout<<"\nArea of the circle= "<<ar;
	}
};

void main()
{
	ar y;
	clrscr();
	cout<<"Sides of triangle = 3.2, 4.0 and 5.1";
	y.area(3.2,4,5.1);

	cout<<"\n\nLength and breadth of rectangle = 15.0 and 20.0";
	y.area(15,20);

	cout<<"\n\nRadius of circle = 5.2";
	y.area(5.2);

	getch();
}