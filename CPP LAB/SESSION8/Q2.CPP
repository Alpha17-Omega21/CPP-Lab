/*
Write a program to declare a class with three data variables Emp-no, Emp-name, 
Designation.

Declare public member functions to
(i) Accept Emp-no, Emp-name and Designation from the user.
(ii) Display the data of the employee entered.

Use object array for 10 employees.
*/

#include <iostream.h>//library header
#include <conio.h>//library header

class  EMPLOYEE{ //class creation

int Emp_no;// declaration of variables
char Emp_name[90],Designation[90];// declaration of variables

public: //access specifiers
void getdata(){//function creation

cin>>Emp_no>>Emp_name>>Designation; //input

}

void display(){//function creation

cout<<"ID: "<<Emp_no<<endl<<"NAME : "<<Emp_name<<endl<<"Designation : "<<Designation<<"\n";  //prompt

}

};

void main(){
    clrscr();//clears the screen
EMPLOYEE EMP[10];
cout<<"Enter the IDs,Names and Designation of 10 Employees\n"; //prompt
for (int i = 0; i < 10; i++)
{  cout<<"Employee No."<<i+1<<endl; //prompt
   EMP[i].getdata();//executes the function
    cout<<endl;
}

clrscr();//clears the screen
cout<<"The details of 10 employees are :\n\n"; //prompt

for (i = 0; i < 10; i++)
{  cout<<"Employee No."<<i+1<<endl; //prompt
   EMP[i].display();//executes the function
    cout<<endl;
}




    getch();
}