/*
Write a program to declare a class with three data variables Emp-no, Emp-name, 
Designation.

Declare public member functions to
(i) Accept Emp-no, Emp-name and Designation from the user.
(ii) Display the data of the employee entered.

Use object array for 10 employees.
*/

#include <iostream.h>
#include <conio.h>

class  EMPLOYEE{

int Emp_no;
char Emp_name[90],Designation[90];

public:
void getdata(){

cin>>Emp_no>>Emp_name>>Designation;

}

void display(){

cout<<"ID: "<<Emp_no<<endl<<"NAME : "<<Emp_name<<endl<<"Designation : "<<Designation<<"\n";

}

};

void main(){
    clrscr();
EMPLOYEE EMP[10];
cout<<"Enter the IDs,Names and Location of 10 Employees\n";
for (int i = 0; i < 10; i++)
{  cout<<"Employee No."<<i+1<<endl;
   EMP[i].getdata();
    cout<<endl;
}

clrscr();
cout<<"The details of 10 employees are :\n\n";

for (i = 0; i < 10; i++)
{  cout<<"Employee No."<<i+1<<endl;
   EMP[i].display();
    cout<<endl;
}




    getch();
}