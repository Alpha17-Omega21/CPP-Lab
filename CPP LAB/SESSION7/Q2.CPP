/*
Write a C++ program to find out the sum of N numbers, by defining proper class, constructor
and methods.
*/
#include <iostream.h>
#include <conio.h>
#include <string.h>
#include<dos.h>

class ACCOUNT{
int AccountNumber,Balance;
char AccountHolder[90];

public:

ACCOUNT(int acc_num,char acc_hold[90],int bal){
AccountNumber=acc_num;
strcpy(AccountHolder,acc_hold);
Balance=bal;

}
void bank(int cred,int deb){
int Credit = cred;
int Debit = deb;
Balance = Balance + Credit;
Balance = Balance - Debit;
delay(200*10);
clrscr();
cout<<endl<<"Account Number  "<<AccountNumber<<endl;
cout<<endl<<"Name : "<<AccountHolder<<endl;
cout<<endl<<"Your Balance is Rs "<<Balance<<" since you credited Rs "<<Credit<<" and debited Rs "<<Debit<<endl;
}

};

int main(){
int AccountNumber,Balance,Credit,Debit;
char AccountHolder[90];
	clrscr();


	cout<<"Enter your Account Number : ";
	cin>>AccountNumber;
	cout<<endl<<"Enter your name : ";
	cin>>AccountHolder;
    cout<<endl<<"Enter your Balance : ";
	cin>>Balance;
	ACCOUNT trial(AccountNumber,AccountHolder,Balance);
	cout<<endl<<"Enter how much you need to credit to your account : ";
	cin>>Credit;
	cout<<endl<<"Enter how much you need to debit from your account : ";
	cin>>Debit;
	trial.bank(Credit,Debit);

	getch();
	return 0;
}