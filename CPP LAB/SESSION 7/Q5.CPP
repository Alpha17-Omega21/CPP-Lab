/*Using a class check whether a given string is palindrome or not.
Input the string in main method and print the output in main method.
Use constructor.*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class palindrome
{
	char y[50],r[50];
	int z;
	public:
	palindrome(char x[50])
	{
		strcpy(y,x);
	}
	int pldrm()
	{
		strcpy(r,y);
		cout<<endl<<strrev(r)<<endl;
		z=strcmpi(y,r);
		return z;
	}
};
void main()
{
	char a[50];
	int b;
	clrscr();
	cout<<"Enter any word: ";
	cin>>a;
	palindrome y(a);
	b=y.pldrm();
	if(b==0)
		cout<<endl<<a<<" is Palindrome.";
	else
		cout<<endl<<a<<" is not Palindrome.";
	getch();
}