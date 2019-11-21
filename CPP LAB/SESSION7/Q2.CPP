/*
Write a CPP program to create an ACCOUNT Class. It should have following data members:
AccountNumber, AccountHolder, Balance
Use constructor to initialize the data members. Define methods for crediting and debiting
amounts to the account.
*/
#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <dos.h>
#include <stdlib.h>
class ACCOUNT{
long int AccountNumber,Balance,Credit,Debit;
char AccountHolder[90];

public:

ACCOUNT(int acc_num,char acc_hold[90],int bal){
AccountNumber=acc_num;
strcpy(AccountHolder,acc_hold);
Balance=bal;

}

int menu(){
    char choice;
	repeat:
    cout<<"MAIN MENU\n"<<endl;
	cout<<"(W)ithdraw money"<<endl;
	cout<<"(D)eposit money"<<endl;
	cout<<"(V)iew Balance"<<endl;
	cout<<"(Q)uit Program"<<endl;
	cout<<"Enter W, D, V or Q to execute the process: ";
	cin>>choice;
switch(choice){

	case 'W':
	case 'w':
	withdraw();
    break;

	case 'D':
	case 'd':
    deposit();
    break;

	case 'V':
	case 'v':
    cout<<endl<<"Your Balance is Rs "<<Balance<<endl;
	goto repeat;


	case 'Q':
	case 'q':
	for (int i=3;i>=1;i--){
    clrscr();
    cout<<"Quitting the program in "<<i<< " seconds.";
    delay(1000);

	}
	exit(0);
    break;

	default:
    cout<<"\nInvalid choice. Please enter the given option using characters surrounding the brackets";
	goto repeat;

}



}

int deposit(){
cout<<endl<<"Enter how much you need to credit to your account : ";
cin>>Credit;
cout<<"Processing your request....";
Balance = Balance + Credit;
delay(200*10);
clrscr();
cout<<endl<<"Account Number  "<<AccountNumber<<endl;
cout<<endl<<"Name : "<<AccountHolder<<endl;
cout<<endl<<"Your Balance is Rs "<<Balance<<" since you credited Rs "<<Credit<<endl;
getch();
cout<<endl<<"\nReturning to main menu....";
delay(1000);
clrscr();
menu();
}

int withdraw(){
cout<<endl<<"Enter how much you need to debit from your account : ";
cin>>Debit;
cout<<"Processing your request....";
Balance = Balance - Debit;
delay(200*10);
clrscr();
cout<<endl<<"Account Number  "<<AccountNumber<<endl;
cout<<endl<<"Name : "<<AccountHolder<<endl;
cout<<endl<<"Your Balance is Rs "<<Balance<<" since you debited Rs "<<Debit<<endl;
getch();
cout<<endl<<"\nReturning to main menu....";
delay(1000);
clrscr();
menu();
}

};

int main(){
long int AccountNumber,Balance;
char AccountHolder[90];
	clrscr();


	cout<<"Enter your Account Number : ";
	cin>>AccountNumber;
	cout<<endl<<"Enter your name : ";
	cin>>AccountHolder;
    cout<<endl<<"Enter your Balance : ";
	cin>>Balance;
	ACCOUNT trial(AccountNumber,AccountHolder,Balance);
    clrscr();
    trial.menu();
	return 0;
}
