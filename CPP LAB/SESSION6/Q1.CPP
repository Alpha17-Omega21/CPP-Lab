/*Write a C++ program using a class with an overloaded function swap()

a. To swap two integers. (Pass Arguments by value)
b. To swap two integers. (Pass Arguments by Reference)

*/
#include <iostream.h>
#include <conio.h>

class overld{

public:
void swap(int x,int y){
	int z;
z=x;
x=y;
y=z;

cout<<endl<<"X :"<<x;
cout<<endl<<"Y :"<<y;


}
void swap(int *x,int *y){
  int z;
z=*x;
*x=*y;
*y=z;

cout<<endl<<"X :"<<*x;
cout<<endl<<"Y :"<<*y;


}

};
int main(){

	clrscr();
	cout<<"Enter two values to swap"<<endl;
	cout<<"X : ";
	int x,y;
	cin>>x;
	cout<<"Y : ";
	cin>>y;

	overld one;
	cout<<"\nSWAP BY VALUES";
	one.swap(x,y);
	cout<<endl<<"Original X: "<<x;
	cout<<endl<<"Original Y: "<<y;

	cout<<endl<<"\nSWAP BY REFERENCE"<<endl;
	one.swap(&x,&y);
	cout<<endl<<"Original X: "<<x;
	cout<<endl<<"Original Y: "<<y;



	getch();
	return 0;
}