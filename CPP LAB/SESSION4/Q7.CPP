/*
Create a class called ‘triangle’ with the three sides a, b, c as its member data.
Include three member functions to do the following:
a) To accept the sides of a triangle
b) To display the sides of the triangle
c) To find whether the triangle is an equilateral triangle.
*/

#include <iostream.h>
#include <conio.h>
class triangle{

float a,b,c;


public:
void triangle_input(){

cin>>a;
cin>>b;
cin>>c;



}
void triangle_output(){
cout<<"The Sides of the triangle are "<<a<<", "<<b<<" and "<<c;
}

void equilateral_triangle(){

if(a==b && b==c){
cout<<endl<<"It's an equilateral triangle.";
}
else{
cout<<endl<<"It's not an equilateral triangle.";

}

}

};

int main(){
clrscr();
triangle calc;
cout<<"Enter the length of three sides of the triangle "<<endl;
calc.triangle_input();
calc.triangle_output();
calc.equilateral_triangle();
getch();
return 0;
}