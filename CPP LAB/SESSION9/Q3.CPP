/*Create a class called add with protected variable x.
Derive a class called der from class add
privately with public functions
intial () - to initialise x to 5
accept () - to accept an integer
display () - to add x to accepted value and print it
In the main () function,
create an object of class der and perform its functions*/


#include<iostream.h>//library function
#include<conio.h>//library function
class add{//parent class
    protected://access specifier
    int x;//declaration of variables



};
class der: private add//derived class
{  int y;//declaration of variables
   public://access specifier
   void intial()//memeber fucntion of class 'der'
    {
	x=5;//intialization
    }
    void accept()//memeber fucntion of class 'der'
    {
	cout<<"Enter any number: ";//output
	cin>>y;//input
    }

   void display()//memeber fucntion of class 'der'
    {
	intial();//function
	accept();//function
	cout<<"The value of X is 5 "<<endl;//output
	cout<<"The sum of ("<<x<<" + "<<y<<") = "<<x+y;//output
    }
};
void main()//main()
{
  clrscr();
  der g;
  g.display();
  getch();
}