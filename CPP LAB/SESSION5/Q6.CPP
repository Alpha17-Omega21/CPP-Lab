/*Write a program to multiply two matrices.*/
#include <iostream.h>
#include <conio.h>
#include <dos.h>
class arr{

int matrix_one[30][30],matrix_two[30][30],matrix_multiplication[30][30],r1,c1,r2,c2;
public:
void matrix_product(){
int sum=0;
	cout<<"Enter how many rows you need for the first matrix : ";//output
	cin>>r1;
	cout<<"Enter how many columns you need for the first matrix : ";//output
	cin>>c1;
	cout<<"Enter numbers for the first matrix :"<<endl;//output
	for(int i=0;i<r1;i++){
	for(int j=0;j<c1;j++){
		cin>>matrix_one[i][j];

	}
		      cout<<endl;
	}

	cout<<"The first matrix is :"<<endl;//output
	for(i=0;i<r1;i++){
	for(int j=0;j<c1;j++){
		cout<<matrix_one[i][j]<<"\t";

	}
		      cout<<endl;
	}

	repeat: cout<<"Enter how many rows you need for the second matrix : ";//output
	cin>>r2;
	cout<<"Enter how many columns you need for the second matrix : ";//output
	cin>>c2;

	if(c1!=r2){
	cout<<"The matrices can't be multiplied because the value of the second matrix row \n and the first matrix column must be equal";
	delay(5000);
	goto repeat;
	}
	else{
	cout<<"Enter numbers for the second matrix :"<<endl;//output
	for(i=0;i<r2;i++){
	for(int j=0;j<c2;j++){
		cin>>matrix_two[i][j];

	}
		      cout<<endl;
	}


	cout<<"The second matrix is  :"<<endl;//output
	for(i=0;i<r2;i++){
	for(int j=0;j<c2;j++){
		cout<<matrix_two[i][j]<<"\t";

	}
		      cout<<endl;
	}
	}
	
	

	cout<<endl<<"The product of the two matrices is  :\n"<<endl;
	/*PROCESS*/
	for(i=0;i<r1;i++){
	for(int j=0;j<c2;j++){
		for(int k=0;k<r2;k++){
		
		sum = sum + (matrix_one[i][k]*matrix_two[k][j]);
		}
		matrix_multiplication[i][j]=sum;
		sum=0;
	}
	cout<<"\n";
	}
	/*OUTPUT*/
	for(i=0;i<r1;i++){
	for(int j=0;j<c2;j++){
		cout<<matrix_multiplication[i][j]<<"\t";

	}
		      cout<<endl;
	}
	

}
};
void main(){

	clrscr();
	arr one;
	one.matrix_product();
	getch();

}