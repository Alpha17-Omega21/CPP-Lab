/*2.Write a CPP program to implement polymorphism . Compute power(m,n)where
i) m is double and n is integer
ii) m and n are integers*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>
class Maths
{
 float A,B;
 public:
void power( double m, int n)
	{
	A= pow(m,n);
	 cout<<"\n"<<"Power of "<<m<< " raised to  "<<n<<" = "<<setprecision(2)<<A;
	}
void power( int m, int n)
	{
      B= pow(m,n);
	cout<<"\n"<<"Power of " <<m<< " raised to  "<<n<< " = "<<B;
	}
};
void main()
 {
 clrscr();
  int a,b,d;
  float c;
 Maths P;

 cout<<"Enter any integer  "<<"\n";
 cin>>a;
 cout<<"Enter raised by the power of "<<a<<"\n";
 cin>>b;
  P.power(a,b);
 cout<<"\n\n\nEnter floating integer"<<"\n";
 cin>>c;
 cout<<"Enter raised by the power of "<<c<<"\n";
 cin>>d;
 P.power(c,d);
 getch();
 }