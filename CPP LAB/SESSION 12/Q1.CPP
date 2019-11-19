/*Create a class called add with two private variables. Accept values in these variables in the 
public function accept(). Display their sum in display() function. In the main () function, 
create an object of class  add . Declare a pointer to the object. Using pointer accept, add 
and display the sum of 2 numbers*/
#include<iostream.h>
#include<conio.h>
class add{
    private:
    int x,y;
    public:
    void accpet()
    {
        cout<<"Enter the value one:";
	cin>>x;
	cout<<"Enter the value two:";
	cin>>y;

    }
    void display()
    {

	cout<<"The add of two values:"<<x+y;
    }

};
void main()
{

   clrscr();
    add *pointer;
    pointer->accpet();
    pointer->display();
    getch(); 

}