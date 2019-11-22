/*
Write a CPP program to create an ACCOUNT Class. It should have following data members:
AccountNumber, AccountHolder, Balance
Use constructor to initialize the data members. Define methods for crediting and debiting
amounts to the account.
*/
#include <iostream.h> //library header
#include <conio.h>//library header
#include <string.h>//library header
#include <dos.h>//library header
#include <stdlib.h>//library header
class ACCOUNT{
long int AccountNumber,Balance,Credit,Debit; //declare the variables
char AccountHolder[90];//declare the variables

public:

ACCOUNT(long int acc_num,char acc_hold[90],long int bal){
AccountNumber=acc_num;//initialization
strcpy(AccountHolder,acc_hold);//initialization
Balance=bal;//initialization

}

int menu(){
    char choice;
	repeat: //goto statement source
    cout<<"MAIN MENU\n"<<endl;//output
	cout<<"(W)ithdraw money"<<endl;//output
	cout<<"(D)eposit money"<<endl;//output
	cout<<"(V)iew Balance"<<endl;//output
	cout<<"(Q)uit Program"<<endl;//output
	cout<<"Enter W, D, V or Q to execute the process: ";//output
	cin>>choice;//input
switch(choice){

	case 'W':
	case 'w':
	withdraw();//goes to withdraw()
    break;

	case 'D':
	case 'd':
    deposit();//goes to deposit()
    break;

	case 'V':
	case 'v':
    cout<<endl<<"Your Balance is Rs "<<Balance<<endl;//output
	goto repeat; //goes to the goto source


	case 'Q':
	case 'q':
	for (int i=3;i>=1;i--){
    clrscr(); //clears the screen
    cout<<"Quitting the program in "<<i<< " seconds.";//output
    delay(1000);

	}
	exit(0); //exits the program
    break;

	default:
    cout<<"\nInvalid choice. Please enter the given option using characters surrounding the brackets";//output
	goto repeat; //goes to the goto source

}



}

int deposit(){
cout<<endl<<"Enter how much you need to credit to your account : ";//output
cin>>Credit;//input
cout<<"Processing your request....";//output
Balance = Balance + Credit;
delay(200*10);
clrscr();
cout<<endl<<"Account Number  "<<AccountNumber<<endl;//output
cout<<endl<<"Name : "<<AccountHolder<<endl;//output
cout<<endl<<"Your Balance is Rs "<<Balance<<" since you credited Rs "<<Credit<<endl;//output
getch();
cout<<endl<<"\nReturning to main menu....";//output
delay(1000);
clrscr();
menu();
}

int withdraw(){
cout<<endl<<"Enter how much you need to debit from your account : ";//output
cin>>Debit;//input
cout<<"Processing your request....";//output
Balance = Balance - Debit;
delay(200*10);
clrscr();
cout<<endl<<"Account Number  "<<AccountNumber<<endl;//output
cout<<endl<<"Name : "<<AccountHolder<<endl;//output
cout<<endl<<"Your Balance is Rs "<<Balance<<" since you debited Rs "<<Debit<<endl;//output
getch();
cout<<endl<<"\nReturning to main menu....";//output
delay(1000);
clrscr();
menu();
}

};

int main(){
long int AccountNumber,Balance;//declaring the variables for main()
char AccountHolder[90];//declaring the variables for main()
	clrscr();


	cout<<"Enter your Account Number : ";//output
	cin>>AccountNumber;//input
	cout<<endl<<"Enter your name : ";//output
	cin>>AccountHolder;//input
    cout<<endl<<"Enter your Balance : ";//output
	cin>>Balance;//input
	ACCOUNT trial(AccountNumber,AccountHolder,Balance); //creats the object
    clrscr();
    trial.menu();//menu() begins
	return 0;
}
