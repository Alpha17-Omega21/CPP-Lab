/*Write a program that will take as input a set of integers and find and display
the largest and the smallest values in the set.*/
#include <iostream.h>
#include <conio.h>

class arr{
private:
int num[30],n,big,smol;
//"we are not mere pawns that can be toyed with. you are the disease, we are the cure"
//"we are not mere pawns that can be toyed with. you are the disease, we are the cure"
public:
void value_size(){
	cout<<"Enter how many numbers you need to enter"<<endl;//output
	cin>>n;
	cout<<"Enter "<<n<<" numbers to determine which value is the biggest and the smallest:"<<endl;//output
	for(int i=0;i<n;i++){
		cin>>num[i];
		cout<<endl;

	}

	big=num[0];
	smol=num[0];
	cout<<endl<<"The numbers you entered are :\n"<<endl;
	for(i=0;i<n;i++){
		cout<<num[i]<<"\t";
		if(num[i]<smol){

			smol=num[i];
		}
		else if(num[i]>big){

			big=num[i];
		}
	}
	cout<<endl<<"The biggest of all numbers you have entered is "<<big; //output
	cout<<endl<<"The smallest of all numbers you have entered is "<<smol;//output


}
};
int main(){

	clrscr();
	arr one;
	one.value_size();
	getch();
	return 0;
}