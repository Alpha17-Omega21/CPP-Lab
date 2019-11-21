/*Write a Program to input a number N and print the odd Numbers up till N.*/
#include<iostream.h>
#include<conio.h>
void main()
{
    int N,x=1;
    clrscr();
    cout<<"Enter any number:";
    cin>>N;
    while(x<=N)
    {
        if(x%2==1)
        {
            cout<<" "<<x;   
        }
        x++;
       
    }
    getch();
}