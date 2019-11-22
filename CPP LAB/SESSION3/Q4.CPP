/*Write the code to input any integer and find the reverse of the integer.*/
#include<iostream.h>
#include<conio.h>
void main()
{
    long int  a,rev=0;
    clrscr();
    cout<<"Enter any number:";
    cin>>a;
    while(a>0)
    {
	rev=rev*10;
	rev=rev+(a%10);
	a=a/10;

    }
   cout<<"This numbed is reversed:"<<rev;
   getch();
}