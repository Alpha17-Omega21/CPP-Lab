/*Define a class Student with the following specifications:
Private members of the class:
Admission Number - An Integer
Name - string of 20 characters
Semester - Integer
Roll Number - Integer
Public members of the class:
getdata() - To input the data
showdata() - To display the data
Write a program to define an object of this class, input the data and then display
it.
*/

#include <iostream.h>
#include <conio.h>
class Student{
private:
int admission_num,semester,roll_num;
char name[20];
public:
void getdata(){

	cout<<"Enter your Admission number "<<endl;
	cin>>admission_num;
	cout<<endl<<"Enter your name ";
	cin>>name;
	cout<<endl<<"What semester are you in ? ";
	cin>>semester;
	cout<<endl<<"Enter your roll number ";
	cin>>roll_num;
}

void showdata(){

	cout<<endl<<"Admission number : "<<admission_num<<endl;
	cout<<endl<<"Name : "<<name<<endl;
	cout<<endl<<"Semester : "<<semester<<endl;
	cout<<endl<<"roll number : "<<roll_num<<endl;
}

};

int main(){
clrscr();
Student info;
info.getdata();
info.showdata();

getch();
return 0;
}