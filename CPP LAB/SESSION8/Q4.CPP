/*
Write a program for a Shop to accept productid, productname, quantity 
and cost of 3 products.

Allow a customer to buy items from the shop and display his bill. Use object array.
*/

#include <iostream.h> //library header
#include <conio.h> //library header
#include <string.h> //library header
#include <stdlib.h> //library header
class  Shop{
int quant,cost;// decalration of variables
char prod_id[90];// decalration of variables

public://access specifier
char prodname[90];// decalration of variables


void input_data(){// function memeber of class 'Shop'

cout<<"PRODUCT ID: "; //output
cin>>prod_id;//input
cout<<"ITEM NAME: "; //output
cin>>prodname;//input
cout<<"COST: "; //output
cin>>cost;//input

}

void output_data(){// function memeber of class 'Shop'

cout<<"PRODUCT ID: "<<prod_id<<endl; //output
cout<<"ITEM NAME: "<<prodname<<endl; //output
cout<<"COST: "<<cost<<endl; //output



}


int shopping(){// function memeber of class 'Shop'

int repeat=0;
char ans;
  //  if(strcmpi(item_name,prodname)==0){

cout<<"How many of "<<prodname<<" do you need? : ";//output
cin>>quant;//input
getch();
clrscr();

cout<<"Here's shopping receipt: \n\n";//output

cout<<"ITEM NAME: "<<prodname<<endl;//output
cout<<"PRODUCT ID: "<<prod_id<<endl;//output
cout<<"COST: Rs "<<cost*quant<<endl;//output

//SHOPPING AGAIN
getch();
mistake:
cout<<"Do you wish to buy another item? (Enter Y (for Yes) or N (For No) : "<<endl;//output
cin>>ans;//input
switch (ans)//switch condition
{
case 'y':
case 'Y':
repeat=1;
return repeat;
break;

case 'n':
case 'N':
return repeat;
break;

default:
cout<<"Please enter either Y or N ";//output
getch();
goto mistake;//goto statement

}





}

};

void main(){//main function
    clrscr();//clears the screen


char item[90];//declaration of variables
Shop stuff[5];//declaration of variables
//INPUT
cout<<"Enter the Item id, name, quantity and its cost\n";//output
for (int i = 0; i < 3; i++)// for loop iteration
{  cout<<"Item No."<<i+1<<endl;//output
   stuff[i].input_data();
    cout<<endl;
}

cout<<"Press Enter ";//output
getch();
clrscr();
//OUTPUT
cout<<"The details of 3 Items are :\n\n";//output
for (i = 0; i < 3; i++)// for loop iteration
{  cout<<"Item No."<<i+1<<endl;//output
   stuff[i].output_data();
    cout<<endl;
}
cout<<"Press Enter ";//output
getch();
clrscr();

//BILLING
again:
cout<<"SHOPPING CART\n";//output
cout<<"Enter the name of the item you wish to buy: ";//output
cin>>item;//input

int limit=0;//intialization
for (i = 0; i < 3; i++){// for loop iteration
int repeat;
    if(strcmpi(item,stuff[i].prodname)==0){
	repeat=stuff[i].shopping();//assigns the returned value of shopping() to 'repeat'
	 if (repeat!=0){goto again;}//goes to the repeat: position if the value is 1
    }else{limit++;}//increments the limit if the searched shopping item isn't found in the shopping details
}

char x;//declaration of variable
if (limit==3){
cout<<endl<<"Sorry, no such item was found. Would you like to try again? "<<endl;//output
cout<<"(Y for Yes, N for No) : ";//output
wrong:
cin>>x;//input
switch(x){//switch condition
    case 'Y':
    case 'y':
    goto again;//goto statement
    break;

    case 'N':
    case 'n':
    exit(0); //exits the program
    break;

    default:
    cout<<endl<<"Sorry, didn't quite get what you wanted. (Press Either Y or N ) : ";//output
    goto wrong;//goto statement
}
}



    getch();
}