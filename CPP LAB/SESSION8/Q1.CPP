/*Create a class called 'STUDENT' that has - StudentID and STUDNAME as data members -
member function getdata() to input data and member function display() to output data.
Write a main function to create an object array EMP of size 5. Accept and display the details
of 5 students.*/

#include <iostream.h>
#include <conio.h>

class  STUDENT{

int StudentID;
char STUDNAME[90];
public:
void getdata(){

cin>>StudentID>>STUDNAME;

}

void display(){

cout<<"ID: "<<StudentID<<endl<<"NAME : "<<STUDNAME<<"\n";

}

};

void main(){
    clrscr();
STUDENT EMP[5];
cout<<"Enter the IDs and names of 5 students\n";
for (int i = 0; i < 5; i++)
{  cout<<"Student No."<<i+1<<endl;
   EMP[i].getdata();
    cout<<endl;
}

clrscr();
cout<<"The IDs and names of 5 students are :\n\n";

for (i = 0; i < 5; i++)
{  cout<<"Student No."<<i+1<<endl;
   EMP[i].display();
    cout<<endl;
}




    getch();
}