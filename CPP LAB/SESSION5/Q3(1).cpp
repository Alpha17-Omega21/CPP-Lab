/**/
#include <iostream.h>
#include <conio.h>

class arr{
private:
int num[30],n,big,smol;
//"we are not mere pawns that can be toyed with. you are the disease, we are the cure"
//"we are not mere pawns that can be toyed with. you are the disease, we are the cure"
public:
void descending(){
	cout<<"Enter how many numbers you need to enter"<<endl;//output
	cin>>n;
	cout<<"Enter "<<n<<" numbers :"<<endl;//output
	for(int i=0;i<n;i++){
		cin>>num[i];
		cout<<endl;

	}

	big=num[0];
	
	cout<<endl<<"The numbers you entered are :\n"<<endl;
	for(i=0;i<n;i++){
		cout<<num[i]<<"\t";
		for(int j=0;j<n;j++)
		if(num[i]<){

			smol=num[i];
		}
		
	}
	cout<<endl<<"The biggest of all numbers you have entered is "<<big; //output
	cout<<endl<<"The smallest of all numbers you have entered is "<<smol;//output


}
};
int main(){

	clrscr();
	arr one;
	one.descending();
	getch();
	return 0;
}