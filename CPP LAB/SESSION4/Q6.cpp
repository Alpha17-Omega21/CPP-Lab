/*
Define a class ITEM in C++ with following description:
Private members:
Icode of type integer (Item Code)
Item of type string (Item Name)
Price of type Float (Price of each item)
Qty of type integer (Quantity in stock)
Discount of type float (Discount percentage on the item)

A find function finddisc( ) to calculate discount as per the following
rule:
If Qty <=50, discount is 0%
If 50 < Qty <=100, discount is 5%
If Qty>100, discount is 10%

Public members:
A function Buy() to allow user to enter values for Icode, Item,Price, Qty
and call function Finddisc ( ) to calculate the discount. A function
showall() to allow user to view the content of all the data members
*/

#include <iostream.h>
#include <conio.h>
class ITEM{
private:
int Icode,Qty;
float price,discount;
char item_name[80];
void finddisc(int Qty){
if(Qty<50){
discount=0;
}
else if(Qty<=100){
discount=5;
}
else if(Qty>100){
discount=10;
}

}
public:
void Buy(){
cout<<endl<<"Item Code : ";
cin>>Icode;
cout<<endl<<"Item Name : ";
cin>>item_name;
cout<<endl<<"Quantity : ";
cin>>Qty;
finddisc(Qty);
}
void showall(){
cout<<"Item Code : "<<Icode<<endl;
cout<<"Item Name : "<<item_name<<endl;
cout<<"Quantity : "<<Qty<<endl;
cout<<"Discount : "<<discount<<"%";
}

};

int main(){
clrscr();
ITEM shop;
shop.Buy();
shop.showall();
getch();
return 0;
}