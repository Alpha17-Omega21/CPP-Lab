//Write a CPP program to input the number of girls and boys in each of the three batches of BSc (CS) (HI) in your college. Find the percentage of boys and girls in all three batches together.
#include <iostream.h>
#include<conio.h>
void main()
{

// Variable definition
float gbatch[3],bbatch[3],bsum=0,gsum=0,gper,bper,i;

clrscr();
for(i=0;i<3;i++){
cout<<"Enter the number of girls and boys in Batch "<<i+1<<endl;
cin>>gbatch[i]>>bbatch[i];
gsum=gsum+gbatch[i];
bsum=bsum+bbatch[i];
}

gper=(gsum/75)*100;
bper=(bsum/75)*100;

cout<<endl<<"The percentage of girls in all three batches is "<<gper<<"%";
cout<<endl<<"The percentage of boys in all three batches is "<<bper<<"%";

getch();
}