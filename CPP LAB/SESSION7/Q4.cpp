/*Using main method, input an integer below 60.
Using a class called Fib generate the Fibonacci series till this integer. Use constructor*/
#include<iostream.h>
#include<conio.h>
class Fib
{
	public:
	double i,t,x,y,p,z;
	Fib(int v)
	{
		t=v;
		x=0;
		y=1;
	}
	void ser()
	{
	cout<<"The fibonacci series:"<<x<<","<<y<<",";
	p=2;
	while(p<t)
	   {
		z=x+y;
		p++;
		cout<<z<<",";
		x=y;
		y=z;
	   }
	}
};
void main()
{
	clrscr();
	int n;
	cout<<"Input an integer below 60:";
	cin>>n;
	if(n<60)
	{
		Fib h(n);
		h.ser();
	}
	else{
		cout<<"Shrug......";
	}
	getch();
}
