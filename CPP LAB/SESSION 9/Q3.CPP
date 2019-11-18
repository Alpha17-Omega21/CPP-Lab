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
    int x,y;
    public:
    void intial()
    {
	x=5;
    }
    void accept()
    {
	cout<<"Enter any number:";
	cin>>y;
    }


};
class der: private add
{
   public:
   void display()
    {
	intial();
	accept();
	cout<<"The add of 5 "<<"+ "<<y<<" :"<<x+y;
    }
};
void main()
{
  clrscr();
  der g;
  g.display();
  getch();
}