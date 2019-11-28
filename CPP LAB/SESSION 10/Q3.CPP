/*Create a class called test with a private variable-k and private function add(). Initialise the
value of k. In add(), accept a number and add that to k. Base is a friend class of test. In the
class base, create a public function mul() which accepts number and multiplies that number
with k. Write a suitable main().*/

#include <iostream.h> //library header
#include <conio.h> //library header

class test{ //class declaration

private: //access specifier
int k; //variable declaration
test(int num){ //constructor

    k=num;
}
void add(){ //function
int num2; //variable declaration
cin>>num2; //input
cout<<"The sum of "<<k<<" and "<<num2<<" is "<<num2+k<<endl; //prompt

}
friend class Base;
};


class Base{ //class declaration

public: //access specifier

void mul(){ //function

int assign,product; //variable declaration

cout<<"Enter a number : "; //prompt
cin>>assign; //input
test stuff(assign);
cout<<"Enter another number for sum : "; //prompt
stuff.add();

cout<<"Enter another number for multiplication : "; //prompt
cin>>product; //input

cout<<"The product of "<<stuff.k<<" and "<<product<<" is "<<stuff.k*product; //prompt

}


};

void main(){ //main function
clrscr(); //clears the screen

Base obj; //object creation
obj.mul(); //function execution
getch();
}