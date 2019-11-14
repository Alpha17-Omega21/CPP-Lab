/*
Create a class called stock with

1. protected variables item, price, total and
2. member functions accept() and display().

Derive a class called totalcost from stock with member function tot() which accepts the
number of items needed from the user and finds total cost. Display the details of items
bought.
*/

#include <iostream.h>
#include <conio.h>

class stock{
    protected:
    int price,total;
    char item[90];
    void accept(){}
    void display(){}
    
    };


    class totalcost:public stock
    {

void tot(){}

    };


void main(){
    clrscr();
    
    getch();
}
