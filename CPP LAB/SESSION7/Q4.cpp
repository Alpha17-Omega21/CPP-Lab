/*Using main method, input an integer below 60.
Using a class called Fib generate the Fibonacci series till this integer. Use constructor*/
#include<iostream.h>//library header
#include<conio.h>//library header
class Fib//class creation
{
	public:
	unsigned long int i,t,x,y,p,z;//delares the variables
	Fib(int v)
	{
		t=v;//intialization
		x=0;//intialization
		y=1;//intialization
	}
	void ser()
	{
	cout<<"The fibonacci series:"<<endl<<x<<endl<<y<<endl;//prompt
	p=2;
	while(p<t)
	   {
		z=x+y;//value assignment process
		p++;
		cout<<z<<endl;//prompt
		x=y;//value assignment process
		y=z;//value assignment process
	   }
	}
};
void main()
{
	clrscr();
	int n;//delares the variables
	cout<<"Input an integer below 60:";//prompt
	cin>>n;//input
	if(n<60)//if condition
	{
		Fib h(n);
		h.ser();
	}
	else{
		cout<<"Nope. Input rejected (no numbers more than 60) ";//prompt
	}
	getch();
}
