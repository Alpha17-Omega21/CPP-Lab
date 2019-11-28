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
char prodname[90];// decalration of variables

public://access specifier


void input_data(){// function memeber of class 'Shop'

cout<<"PRODUCT ID: "; //prompt
cin>>prod_id;//input
cout<<"ITEM NAME: "; //prompt
cin>>prodname;//input
cout<<"COST: "; //prompt
cin>>cost;//input

}

void output_data(){// function memeber of class 'Shop'

cout<<"PRODUCT ID: "<<prod_id<<endl; //prompt
cout<<"ITEM NAME: "<<prodname<<endl; //prompt
cout<<"COST: "<<cost<<endl; //prompt



}


int shopping(char item[90]){// function memeber of class 'Shop'

int repeat=0;
char ans;

int diff=strcmpi(prodname,item);


if (diff==0){

cout<<"How many of "<<prodname<<" do you need? : ";//prompt
cin>>quant;//input
getch();
clrscr();

cout<<"Here's shopping receipt: \n\n";//prompt

cout<<"ITEM NAME: "<<prodname<<endl;//prompt
cout<<"PRODUCT ID: "<<prod_id<<endl;//prompt
cout<<"COST: Rs "<<cost*quant<<endl;//prompt

//SHOPPING AGAIN
getch();
mistake:
cout<<"Do you wish to buy another item? (Enter Y (for Yes) or N (for No) : "<<endl;//prompt
cin>>ans;//input
switch (ans){
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
cout<<"Please enter either Y or N ";//prompt
getch();
goto mistake;//goto statement}


}
}
else{return repeat=2;}


}




};

void main(){//main function
    clrscr();//clears the screen


char item[90];//declaration of variables
Shop stuff[5];//declaration of variables
//INPUT
cout<<"Enter the Item id, name, quantity and its cost\n";//prompt
for (int i = 0; i < 3; i++)// for loop iteration
{  cout<<"Item No."<<i+1<<endl;//prompt
   stuff[i].input_data();
    cout<<endl;
}

cout<<"Press Enter ";//prompt
getch();
clrscr();
//prompt
cout<<"The details of 3 Items are :\n\n";//prompt
for (i = 0; i < 3; i++)// for loop iteration
{  cout<<"Item No."<<i+1<<endl;//prompt
   stuff[i].output_data();
    cout<<endl;
}
cout<<"Press Enter ";//prompt
getch();
clrscr();

//BILLING
again:
cout<<"SHOPPING CART\n";//prompt
cout<<"Enter the name of the item you wish to buy: ";//prompt
cin>>item;//input

int limit=0;//intialization


for (i = 0; i < 2; i++) //for loop iteration
{
    int repeat=stuff[i].shopping(item);
    if (repeat==0){
	break;
    }
    else if (repeat==1){
	goto again;
    }
    else if(repeat==2){
	limit++;
	continue;
    }
}
char x;//declaration of variable

if(limit!=0){
cout<<endl<<"Sorry, no such item was found. Would you like to try searching again? "<<endl;//prompt
cout<<"(Y for Yes, N for No) : ";//prompt
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
    cout<<endl<<"Sorry, didn't quite get what you wanted. (Press Either Y or N ) : ";//prompt
    goto wrong;//goto statement
}
}



    getch();
}