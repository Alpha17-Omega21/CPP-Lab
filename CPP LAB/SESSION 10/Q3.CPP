/*Create a class called test with a private variable-k and private function add(). Initialise the
value of k. In add(), accept a number and add that to k. Base is a friend class of test. In the
class base, create a public function mul() which accepts number and multiplies that number
with k. Write a suitable main().*/

#include <iostream.h>
#include <conio.h>

class test{

private:
int k;
test(int num){

    k=num;
}
void add(){
int num2;
cin>>num2;
cout<<"The sum of "<<k<<" and "<<num2<<" is "<<num2+k<<endl;

}
friend class Base;
};


class Base{
public:
void mul(){
int assign,product;
cout<<"Enter a number : ";
cin>>assign;
test stuff(assign);
cout<<"Enter another number for sum : ";
stuff.add();

cout<<"Enter another number for multiplication : ";
cin>>product;

cout<<"The product of "<<stuff.k<<" and "<<product<<" is "<<stuff.k*product;

}


};

void main(){
clrscr();

Base obj;
obj.mul();
getch();
}