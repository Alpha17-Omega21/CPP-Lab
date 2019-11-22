/*Electricity board charges the following rates to domestic users:

For the first 100 units - 60P per unit
For next 200 units - 80P per unit
Beyond 300 units - 90P per unit
All users are charged a minimum of Rs.50.00.
If the total amount is more than Rs.300.00 than an additional surcharge of 15%
is added Write a C++ program to read the names of users and number of units
consumed and print out the charges with names*/

#include<iostream.h>
#include<conio.h>
void main()
{
	char name[50];
	float unit,amount,surchge,total;
	clrscr();
	cout<<"Enter your name:";
	cin>>name;
	cout<<"Enter the number of unit consumed:";
	cin>>unit;
	if(unit<=100)
	{
		amount=unit*0.60;
	}
	else if(unit<=300)
	{
		amount=((unit-100)*0.80)+60;
	}
	else
	{
		amount=((unit-300)*0.90)+60+160;
	}
	cout<<"Unit="<<amount<<endl;
    //	rupee=amount*50;
      //	cout<<"Rupees="<<rupee<<endl;

	if(amount>300)
	{
	     total=((amount*15)/100)+50;
	}
	else
	{
	  total=50+amount;
	}

	cout<<"\nDisplay the charges";
	cout<<"\nName:"<<name<<endl;
	cout<<"Total rupee:"<<total<<endl;
	getch();

}