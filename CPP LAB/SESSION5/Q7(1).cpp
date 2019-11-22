/*Write a program to print the diagonal elements of an N × N matrix.*/
#include <iostream.h>
#include <conio.h>

class arr{
int matrix[30][30],r,c;

public:
void matrix_diagonal(){
	cout<<"Enter how many rows you need : ";//output
	cin>>r;
	cout<<"Enter how many columns you need : ";//output
	cin>>c;
	cout<<"Enter elements for the matrix  :"<<endl;//output
	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		cin>>matrix[i][j];

	}
		      cout<<endl;
	}

	

	cout<<endl<<"The transpose of the entered matrix is :\n"<<endl;
	for(i=0;i<c;i++){
	for(int j=0;j<r;j++){
		cout<<matrix[j][i]<<"\t";
	}
	cout<<"\n";
	}

}
};
void main(){

	clrscr();
	arr one;
	one.matrix_diagonal();
	getch();

}