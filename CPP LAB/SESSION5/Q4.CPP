/*Write a program to find the sum of two matrices.*/
#include <iostream.h>
#include <conio.h>

class arr{
private:
int matrix_one[30][30],matrix_two[30][30],r,c;
//"we are not mere pawns that can be toyed with. you are the disease, we are the cure"
//"we are not mere pawns that can be toyed with. you are the disease, we are the cure"
public:
void matrix_sum(){
	cout<<"Enter how many rows you need : ";//output
	cin>>r;
	cout<<"Enter how many columns you need : ";//output
	cin>>c;
	cout<<"Enter numbers for the first matrix :"<<endl;//output
	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		cin>>matrix_one[i][j];

	}
		      cout<<endl;
	}

	cout<<endl<<"Enter numbers for the second matrix :"<<endl;//output
	for(i=0;i<r;i++){
	for(int j=0;j<c;j++){
		cin>>matrix_two[i][j];
		}
	   cout<<endl;
	}

	cout<<endl<<"\nThe sum of the first matrix and the second matrix is :\n"<<endl;
	for(i=0;i<r;i++){
	for(int j=0;j<c;j++){
		cout<<matrix_one[i][j]+matrix_two[i][j]<<"\t";
	}
	cout<<"\n";
	}

}
};
void main(){

	clrscr();
	arr one;
	one.matrix_sum();
	getch();

}