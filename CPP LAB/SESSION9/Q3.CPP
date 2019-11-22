/*Create a class called add with protected variable x.
Derive a class called der from class add
privately with public functions
intial () - to initialise x to 5
accept () - to accept an integer
display () - to add x to accepted value and print it
In the main () function,
create an object of class der and perform its functions*/
#include<iostream.h>
#include<conio.h>
class add{
    protected:
    int x;



};
class der: private add
{  int y;
   public:
   void intial()
    {
	x=5;
    }
    void accept()
    {
	cout<<"Enter any number: ";
	cin>>y;
    }

   void display()
    {
	intial();
	accept();
	cout<<"The value of X is 5 "<<endl;
	cout<<"The sum of ("<<x<<" + "<<y<<") = "<<x+y;
    }
};
void main()
{
  clrscr();
  der g;
  g.display();
  getch();
}