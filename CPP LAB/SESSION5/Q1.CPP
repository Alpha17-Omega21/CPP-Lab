/*Write a program to READ AND PRINT N NUMBERS (ARRAY)*/
#include <iostream.h>
#include <conio.h>

class arr{
private:
int num[30],n,i;
//"we are not mere pawns that can be toyed with. you are the disease, we are the cure"
//"we are not mere pawns that can be toyed with. you are the disease, we are the cure"
public:
void arr_function(){
	cout<<"Enter how many times you want to enter the number"<<endl;
	cin>>n;
	cout<<"Enter the "<<n<<" numbers."<<endl;
	for(int i=0;i<n;i++){
		cin>>num[i];
		cout<<endl;
	}
	cout<<"The "<<n<<" numbers you entered are:"<<endl;
	for(i=0;i<n;i++){
		cout<<num[i]<<"\t"
		;

	}
}


};
int main(){

	clrscr();
	arr one;
	one.arr_function();
	getch();
	return 0;
}