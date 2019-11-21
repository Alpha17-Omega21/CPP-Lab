/* Create a class called base with private variable 'm'. Accept value of 'm'.
Declare a friend class der. In der class, declare private variable 'n' and public function sum ().
In sum (), accept value 'n', and find sum of m and n. Print the result.
Using above classes, write a main (), to accept two values and find sum and print the result.*/

#include <iostream.h>
#include <conio.h>

class base{
int m;
public:
base(int num1){

    m=num1;

}
friend class der;
};

class der
{

int n;

public:

int sum(int num2){
n=num2;
return m+n;

}

};

void main(){
int num1,num2;
cout<<"Enter any two integers :";
cin>>num1>>num2;
base a(num1);
der b;
cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<b.sum(num2);

}