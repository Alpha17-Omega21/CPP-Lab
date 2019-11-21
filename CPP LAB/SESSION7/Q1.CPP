/*
Create a class with private members length and breadth, and a public function – area() to
find the area of a rectangle. Use constructor to initialize the length and breadth to 15 and 25
respectively.
*/
#include <iostream.h>
#include <conio.h>

class constrct_overld{
private:
int length,breadth;


public:
constrct_overld(){
length=15;
breadth=25;
}
area(){
int area=length*breadth;
cout<<endl<<"The area of rectangle is "<<area<<" cm";

}

};

int main(){

	clrscr();
	constrct_overld trial;
	trial.area();

	getch();
	return 0;
}