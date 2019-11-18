/*
Write the definition for a class called Rectangle that has floating point data member - length
and width. The class has the following member functions:

* void setlength(float) to set the length data member
* void setwidth(float) to set the width data member
* float area() to calculate and return the area of the rectangle
* int sameArea(Rectangle) that has one parameter of type Rectangle. 

sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't.


Write the definitions for each of the above member functions.
Write main function to create two rectangle objects. Set the length and width of the first
rectangle to 5 and 2.5. Set the length and width of the second rectangle to 5 and 8.9. Display
area of each rectangle.
Check whether the two Rectangles have the same area and print a message indicating the
result.
*/

#include <iostream.h>
#include <conio.h>

class Rectangle{
float length,width;
void setlength();
void setwidth();
float area();
int sameArea();

};
void main(){}