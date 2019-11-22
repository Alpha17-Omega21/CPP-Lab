//Write a program to accept mark of 8 students and print the mean mark.
#include <iostream.h>
#include<conio.h>
void main()
{

// Variable definition:
int i,a[9],sum=0,mean;


clrscr();
cout<<"Enter the scores of 8 students to find out the average"<<endl;
for(i=0;i<8;i++){
cin>>a[i];
sum=sum+a[i];
}
mean=sum/8;
cout<<endl<<"The mean mark of 8 students are "<<mean;
getch();
}