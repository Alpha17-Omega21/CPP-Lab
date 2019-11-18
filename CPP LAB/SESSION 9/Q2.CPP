/*Write a program to create a class named Shape that
contains two integers and a method
named printArea ().
Create another class named Rectangle which inherits Shape class.
The Rectangle class contains the method accept () that
accepts the sides of the rectangle and prints the area.*/
#include<iostream.h>
#include<conio.h>
class Shape{
    protected:
    int a_1,a_2,area;
    public:
    int printArea(int x,int y)
    {
          area=x*y;
          return area;
    }
};
class rectangle: public Shape
{
    public:
    int y;
    void accept()
    {
    cout<<"Enter any number A:";
    cin>>a_1;
    cout<<"Enter any number B:";
    cin>>a_2;
    y=printArea(a_1,a_2);
    cout<<"The area of rectangle:"<<y;
    }

};
void main()
{
    clrscr();
    rectangle S;
    S.accept();
    getch();
}