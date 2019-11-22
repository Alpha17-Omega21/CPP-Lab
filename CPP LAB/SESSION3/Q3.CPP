/*As the programmer, you are asked to develop a program which allows the user
to enter two readings. The program determines the lower of the two readings
and then displays a message indicating the action to be performed based on the
following table:
Use the 9if else( statement to complete the program below:
Range of Reading Action to be Taken
7 or higher Increase heat
5 or higher, but less than 7 Wait for 5 minutes then increase heat
2 or higher, but less than 5 Wait for 10 minutes then increase heat
Below 2 Turn Off*/

#include<iostream.h>
#include<conio.h>
void main()
{
    int  a,b,c;
    clrscr();
    cout<<"Enter one reading:";
    cin>>c;
    cout<<"Enter two reading:";
    cin>>b;
    if(c>b)
    {
       a=b;
    }
    else
    {
      a=c;
    }

    if(7<a)
    {
	cout<<"Increase heat";
    }
    else if(5<a)
    {
	cout<<"Wait for 5 minutes then increase heat";
    }
    else if(2<a)
    {
	cout<<"Wait for 10 minutes then increase heat";
    }
    else
    {
	cout<<"Turn Off";
    }
    getch();
}