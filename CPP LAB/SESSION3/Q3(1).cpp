/*As the programmer, you are asked to develop a program which allows the user
to enter two readings. The program determines the lower of the two readings
and then displays a message indicating the action to be performed based on the
following table:
Use the “if else" statement to complete the program below:
Range of Reading Action to be Taken
-------------------------------------------------------------------------------------
7 or higher                             Increase heat
5 or higher, but less than 7            Wait for 5 minutes then increase heat
2 or higher, but less than 5            Wait for 10 minutes then increase heat
Below 2                                 Turn Off*/
#include <iostream.h>
#include<conio.h>
void main()
{

// Variable definition:
int temp1,temp2,less_temp;


clrscr();
cout<<"Enter two readings to display the instructions needed"<<endl;
cin>>temp1>>temp2;

if(temp1>temp2){
less_temp=temp2;
}
else{
less_temp=temp1;
}

if(less_temp>=7){
cout<<"\nIncrease heat.";
}
else if(less_temp>=5 && less_temp<7){
cout<<"\nWait for 5 minutes then increase heat.";
}



(num>0)? cout<<"The number "<<num<<" is positive." :cout<<"The number "<<num<<" is negative.";
getch();
}