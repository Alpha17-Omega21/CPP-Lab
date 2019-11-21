/*
Create a class with private members length and breadth, and a public function – area() to
find the area of a rectangle. Use constructor to initialize the length and breadth to 15 and 25
respectively.
*/
#include <iostream.h>
#include <conio.h>

class constrct_overld{ //class creation
private: //access specifier
int length,breadth; 
 
public: //access specifier
constrct_overld(){
length=15; //intialization
breadth=25;//intialization
}
void area(){ //
int area=length*breadth; //assigns the value of length*breadth to area 
cout<<endl<<"The length of rectangle is "<<length<<" cm"; //output
cout<<endl<<"The breadth of rectangle is "<<breadth<<" cm";//output
cout<<endl<<"The area of rectangle is "<<area<<" cm"; //output

}

};

int main(){ //main function

	clrscr(); 
	constrct_overld trial; //creates the object 
	trial.area();

	getch();
	return 0;
}