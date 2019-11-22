/*Create a class called stock with

 protected variables item, price, total and
 member functions accept() and display().

Derive a class called totalcost from stock with member function tot() which accepts the
number of items needed from the user and finds total cost. Display the details of items
bought.*/
#include<iostream.h>//Library header
#include<conio.h>//Library header
class stock{
      protected://access specifiers
      int price,total,item1;//declaration of variables 
      char item[50];//declaration of variables 
      public://access specifiers
      void accept()//member function of class 'stock'
      {
	  cout<<"Enter item name:";//output
	  cin>>item;//input
	  cout<<"Enter the price:";//output
	  cin>>price;//input
      }
      void display()//member function of class 'stock'
      {
	  cout<<"Enter the number of "<<item<<" :";//output
	  cin>>item1;//input
	  total=price*item1;
	  cout<<"\n\nSHOPPING RECEIPT"<<endl;//output
	  cout<<"-------------------------"<<endl;//output
	  cout<<"Item name:"<<item<<endl;//output
	  cout<<"The price of the "<<item<<":"<<price<<endl;//output
	  cout<<"========================="<<endl;//output
	  cout<<"The total cost:"<<total<<endl;//output
	  cout<<"-------------------------"<<endl;//output

      }
};
class totalcost: public stock//derived class
{
   public://access specifiers
   void tot()
   {
       accept();//function
       display();//function
   }
};
void main()
{
    clrscr();
    totalcost k;
    k.tot();//function
    getch();
}