/*Write a program to sort the elements in an array in descending order*/
#include <iostream.h>
#include <conio.h>

class arr{
private:
int num[30],n,temp,smol;
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
	cout<<"The unsorted numbers you entered are \n"<<endl;
	for(i=0;i<n;i++){	
		cout<<num[i]<<"\t";
	}
	

	
	
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		     if(num[i]<num[j]){
            temp=num[i];
			num[i]=num[j];
			num[j]=temp;
		     }
		}		
	}
	cout<<endl<<"The sorted numbers you entered are :\n"<<endl;
	for(i=0;i<n;i++){
cout<<num[i]<<"\t";
}
}
};
int main(){

	clrscr();
	arr one;
	one.descending();
	getch();
	return 0;
}