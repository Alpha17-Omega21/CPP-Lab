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



	cout<<endl<<"The matrix you entered is :\n"<<endl;
	for(i=0;i<c;i++){
	for(int j=0;j<r;j++){
		cout<<matrix[i][j]<<"\t";
	}
	cout<<"\n";
	}

	if(r!=c){
	cout<<endl<<"Since the number of rows and columsn aren't the same, displaying the diagonal elements is impossible.";
	}
	else{

	cout<<"\nThe diagonal elements are:\n";
		for(i=0;i<r;i++)
	    {
			for(int j=0;j<c;j++)
			{
				if(i==j)
				{
				cout<<matrix[i][j]<<"\t";;
				}
			}
		}
	}


}
};
void main(){

	clrscr();
	arr one;
	one.matrix_diagonal();
	getch();

}