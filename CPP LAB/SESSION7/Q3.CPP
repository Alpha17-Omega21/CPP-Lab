/*
Write a C++ program to find out the sum of N numbers, by defining proper class, constructor
and methods.
*/
#include <iostream.h>
#include <conio.h>
#include<dos.h>

class big_brain_time{
int Number;
public:

big_brain_time(int N){
Number=N;

}
void math_process(){
int Sum;
Sum=Number*(Number+1)/2;
cout<<"The Sum of First "<<Number<< " natural number is "<<Sum<<endl;
}

};

int main(){
int Number;
	clrscr();

	cout<<"SUM OF N NUMBER CALCULATOR"<<endl;
	cout<<"Enter any natural number : ";
	cin>>Number;
	 big_brain_time trial(Number);
	
	
	trial.math_process();

	getch();
	return 0;
}