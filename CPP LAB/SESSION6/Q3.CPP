/*3. Write an overloaded function called check(). One function should check whether a given
number is divisible by another number or not, the other function should check if the given
number is prime or not. Write a main() function to accept input from user.*/
#include<iostream.h>
#include<conio.h>
class chk
{
	int i,d;
	public:
	void check(int a, int b)
	{
		if(a%b==0){
			cout<<a<<" is divisible by "<<b;
			}
		else{
			cout<<a<<" is not divisible by "<<b;
			}
	}
	void check(int n)
	{
	     d=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0)
				d++;
		}

		if(d==1)

		{
		cout<<n<<" is a prime number.";
		}
		else
		 {
		 cout<<n<<" is not a prime number.";
		 }
	}
};

void main()
{
	int a,b,c;
	chk y;
	clrscr();
	cout<<"Check if the first number is divisible by another number or not:-";
	cout<<"\nEnter the first number:";
	cin>>a;
	cout<<"\nEnter the second number:";
	cin>>b;
	y.check(a,b);

	cout<<"\n\nCheck if the given number is prime or not.";
	cout<<"\nEnter any number:";
	cin>>c;
	y.check(c);

	getch();
}