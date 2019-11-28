/*Write a program to create a class named Shape that
contains two integers and a method
named printArea ().
Create another class named Rectangle which inherits Shape class.
The Rectangle class contains the method accept () that
accepts the sides of the rectangle and prints the area.*/


#include<iostream.h>//library header
#include<conio.h>//library header
class Shape{//parent class
    protected://access specifiers
    int a_1,a_2,area;//declaration of variables
    public://access specifiers
    int printArea(int x,int y)//member functon of class 'Shape'
    {
          area=x*y;
          return area;//returns the value
    }
};
class rectangle: public Shape //derived class
{
    public://access specifiers
    int y;//declaration of variables
    void accept()//member functon of class 'Shape'
    {
    cout<<"Enter any number A:";//prompt
    cin>>a_1;//input
    cout<<"Enter any number B:";//prompt
    cin>>a_2;//input
    y=printArea(a_1,a_2);
    cout<<"The area of rectangle:"<<y;//prompt
    }

};
void main()
{
    clrscr();//clears the screen
    rectangle S;//object creation
    S.accept();
    getch();
}