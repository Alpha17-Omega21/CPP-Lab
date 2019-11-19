/*Create a class ‘Student’, and inherit another class ‘Undergrad’ from this class.
The parent class Student shall have the following protected data members: name, ID, grade,
age, and address and a public method: boolean Passed (double grade)
The Passed () method willtake one parameter- grade (value between 0 and 100). If the grade
is above 70.0, then Passed() returns true, otherwise it returns false.
Input the grade using a public method accept () in the child class.*/


#include<iostream.h>
#include<conio.h>
class Student{
protected:
char name[90],ID[10],address[90];
double grade,age;
int Passed(double grade){ 
    
//Turbo C IDE doesn't support boolean keywords as it's an outdated and obsolete program
//So, we use int datatype to return either 0 or 1
                            
int false=0,true=1;
if (grade>70.0){return true;}
else{return false;}

}

};


class Undergrad:public Student
{
int x;

public:
void accept(){

cout<<"Enter your ID : ";
cin>>ID;

cout<<"Enter your name : ";
cin>>name;

cout<<"Enter your address : ";
cin>>address;

cout<<"Enter your age : ";
cin>>age;

repeat:
cout<<"Enter your score : ";
cin>>grade;

if(grade>0 && grade<=100){
x=Passed(grade);
}
else {

    cout<<"Enter the score between 0 to 100!"<<endl;

    goto repeat;
}

if(x==1){
cout<<name<<", You passed!";

}

else{
cout<<name<<", You failed!";


}

}



};

void main(){
clrscr();
int marks;
Undergrad exam;
exam.accept();


    getch();
}