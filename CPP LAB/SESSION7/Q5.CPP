/*Using a class check whether a given string is palindrome or not.
Input the string in main method and print the output in main method.
Use constructor.*/
#include<iostream.h>//library header
#include<conio.h>//library header
#include<stdio.h>//library header
#include<string.h>//library header
class palindrome
{
	char str[50],rev[50];//variable declaration
	int z;//variable declaration
	public:
	palindrome(char x[50])
	{
		strcpy(str,x);//copies the string value
	}
	int pldrm()
	{
		strcpy(rev,str);//copies the string
		cout<<endl<<strrev(rev)<<endl;//prompt
		z=strcmpi(str,rev);//finds the difference between the strings
		return z;//return the value
	}
};
void main()
{
	char a[50];//variable declaration
	int b;//variable declaration
	clrscr();
	cout<<"Enter any word: ";//prompt
	cin>>a;//input
	palindrome y(a);//object creation
	b=y.pldrm();
	if(b==0)
		cout<<endl<<a<<" is Palindrome.";//prompt
	else
		cout<<endl<<a<<" is not Palindrome.";//prompt
	getch();
}
