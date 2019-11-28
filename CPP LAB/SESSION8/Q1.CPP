/*Create a class called 'STUDENT' that has - StudentID and STUDNAME as data members -
member function getdata() to input data and member function display() to output data.
Write a main function to create an object array EMP of size 5. Accept and display the details
of 5 students.*/

#include <iostream.h>//library header
#include <conio.h>//library header

class  STUDENT{//class creation

int StudentID;//declaration of variables.
char STUDNAME[90];//declaration of variables.
public://access specifiers
void getdata(){

cin>>StudentID>>STUDNAME;//input

}

void display(){

cout<<"ID: "<<StudentID<<endl<<"NAME : "<<STUDNAME<<"\n";//prompt

}

};

void main(){//main ()
    clrscr();
STUDENT EMP[5];//object creation and array
cout<<"Enter the IDs and names of 5 students\n";//prompt
for (int i = 0; i < 5; i++)// for loop iteration
{  cout<<"Student No."<<i+1<<endl;//prompt
   EMP[i].getdata();//object function
    cout<<endl;
}

clrscr();
cout<<"The IDs and names of 5 students are :\n\n";//prompt

for (i = 0; i < 5; i++)// for loop iteration
{  cout<<"Student No."<<i+1<<endl;//prompt
   EMP[i].display();//object function
    cout<<endl;
}




    getch();
}