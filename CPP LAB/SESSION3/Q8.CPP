/*Write a program to find the sum of first N natural numbers. Use for loop*/
#include<iostream.h>
#include<conio.h>
void main()
{
    int n,x=1,sum=0;
    clrscr();
    cout<<"Enter any number:";
    cin>>n;
    while(x<=n)
    {
        sum+=x;
        x++;
    }
    cout<<"The sum of first N natural numbers: "<<sum;
    getch();
}