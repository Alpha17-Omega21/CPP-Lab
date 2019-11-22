/*
Define a class HOTEL in C++ with the following description:
Private Members:
 Rno //Data Member to store Room No
 Name //Data Member to store customer Name
 Tariff //Data Member to store per day rent of room
 NOD //Data Member to store Number of days
 CALC() //A function to calculate and return amount as NOD*Tariff
 
 Public Members:
 Checkin() //A function to enter the content RNo, Name, Tariff and NOD
 Checkout() //A function to display Rno, Name, Tariff, NOD and Amount (Amount to be displayed by calling function CALC()

*/

#include <iostream.h>
#include <conio.h>
class hotel{
private:
int Rno,Tariff,NOD;
char name[90];
void calc(int NOD,int Tariff){
int amount=NOD*Tariff;
cout<<"Amount : Rs "<<amount;
}
public:
void checkin(){
cout<<"Enter the Room number"<<endl;
cin>>Rno;
cout<<"Enter the Name"<<endl;
cin>>name;
cout<<"Enter the Tariff"<<endl;
cin>>Tariff;
cout<<"Enter the Number of Days"<<endl;
cin>>NOD;
}
void checkout(){
cout<<"Room Number : "<<Rno<<endl;
cout<<"Name : "<<name<<endl;
cout<<"Tariff : "<<Tariff<<endl;
cout<<"Number of Days : "<<NOD<<endl;
calc(NOD,Tariff);
}

};

int main(){
clrscr();
hotel info;
info.checkin();
info.checkout();
getch();
return 0;
}