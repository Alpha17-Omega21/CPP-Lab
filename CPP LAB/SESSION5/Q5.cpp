/*Write a program to find the sum of two matrices.*/
#include <iostream.h>
#include <conio.h>

class arr{
private:
int matrix[30][30],r,c;
//"we are not mere pawns that can be toyed with. you are the disease, we are the cure"
//"we are not mere pawns that can be toyed with. you are the disease, we are the cure"
public:
void matrix_transpose(){
	cout<<"Enter how many rows you need : ";//output
	cin>>r;
	cout<<"Enter how many columns you need : ";//output
	cin>>c;
	cout<<"Enter numbers for the matrix :"<<endl;//output
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
	one.matrix_transpose();
	getch();

}