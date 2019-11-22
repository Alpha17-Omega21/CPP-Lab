/*Create a class called stock with

 protected variables item, price, total and
 member functions accept() and display().

Derive a class called totalcost from stock with member function tot() which accepts the
number of items needed from the user and finds total cost. Display the details of items
bought.*/
#include<iostream.h>
#include<conio.h>
class stock{
      protected:
      int price,total,item1;
      char item[50];
      public:
      void accept()
      {
	  cout<<"Enter item name:";
	  cin>>item;
	  cout<<"Enter the price:";
	  cin>>price;
      }
      void display()
      {
	  cout<<"Enter the number of "<<item<<" :";
	  cin>>item1;
	  total=price*item1;
	  cout<<"\n\nBill"<<endl;
	  cout<<"-------------------------"<<endl;
	  cout<<"Item name:"<<item<<endl;
	  cout<<"The price of the "<<item<<":"<<price<<endl;
	  cout<<"========================="<<endl;
	  cout<<"The total cost:"<<total<<endl;
	  cout<<"-------------------------"<<endl;

      }
};
class totalcost: public stock
{
   public:
   void tot()
   {
       accept();
       display();
   }
};
void main()
{
    clrscr();
    totalcost k;
    k.tot();
    getch();
}