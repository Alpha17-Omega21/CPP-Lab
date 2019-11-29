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
	  cout<<"Enter item name:";//prompt
	  cin>>item;//input
	  cout<<"Enter the price:";//prompt
	  cin>>price;//input
      }
      void display(long int total)//member function of class 'stock'
      {
	  
	  cout<<"\n\nSHOPPING RECEIPT"<<endl;//prompt
	  cout<<"-------------------------"<<endl;//prompt
	  cout<<"Item name:"<<item<<endl;//prompt
	  cout<<"The price of the "<<item<<":"<<price<<endl;//prompt
	  cout<<"========================="<<endl;//prompt
	  cout<<"The total cost:"<<total<<endl;//prompt
	  cout<<"-------------------------"<<endl;//prompt

      }
};
class totalcost: public stock//derived class
{
   public://access specifiers
   void tot()
   {
       accept();//function
      cout<<"Enter the number of "<<item<<" :";//prompt
	  cin>>item1;//input
	  total=price*item1;
       display(total);//function
   }
};
void main()
{
    clrscr();
    totalcost k;
    k.tot();//function
    getch();
}