/*
Write a program for a Shop to accept productid, productname, quantity 
and cost of 3 products.

Allow a customer to buy items from the shop and display his bill. Use object array.
*/

#include <iostream.h>
#include <conio.h>
#include <string.h>
class  Shop{

int quant,cost;
char prodname[90],prod_id[90];

public:
void input_data(){

cout<<"PRODUCT ID: ";
cin>>prod_id;
cout<<"ITEM NAME: ";
cin>>prodname;
cout<<"COST: ";
cin>>cost;

}

void output_data(){

cout<<"PRODUCT ID: "<<prod_id<<endl;
cout<<"ITEM NAME: "<<prodname<<endl;
cout<<"COST: "<<cost<<endl;



}

int shopping(char *item_name){
int repeat=0;
char ans;
    if(strcmpi(item_name,prodname)==0){

cout<<"How many of "<<prodname<<" do you need? : ";
cin>>quant;
getch();
clrscr();

cout<<"Here's shopping receipt: \n\n";

cout<<"ITEM NAME: "<<prodname<<endl;
cout<<"PRODUCT ID: "<<prod_id<<endl;
cout<<"COST: Rs "<<cost*quant<<endl;

//SHOPPING AGAIN
getch();
mistake:
cout<<"Do you wish to buy another item? (Enter Y (for Yes) or N (For No) : ";
cin>>ans;
switch (ans)
{
case 'y':
case 'Y':
repeat++;
return repeat;
break;

case 'n':
case 'N':
return repeat;
break;

default:
cout<<"Please enter either Y or N ";
getch();
goto mistake;
break;
}


}
else{return repeat;}



}

};

void main(){
    clrscr();


char item[90];
Shop stuff[5];
//INPUT
cout<<"Enter the Item id, name, quantity and its cost\n";
for (int i = 0; i < 3; i++)
{  cout<<"Item No."<<i+1<<endl;
   stuff[i].input_data();
    cout<<endl;
}

cout<<"Press Enter ";
getch();
clrscr();
//OUTPUT
cout<<"The details of 3 Items are :\n\n";
for (i = 0; i < 3; i++)
{  cout<<"Item No."<<i+1<<endl;
   stuff[i].output_data();
    cout<<endl;
}
cout<<"Press Enter ";
getch();
clrscr();

//BILLING
again:
cout<<"SHOPPING CART\n";
cout<<"Enter the name of the item you wish to buy: ";
cin>>item;

for (i = 0; i < 3; i++)
{  
   int repeat;

   repeat=stuff[i].shopping(item);

   if (repeat!=0){goto again;}

}




    getch();
}