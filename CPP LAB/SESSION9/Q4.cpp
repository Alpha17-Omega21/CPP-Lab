/*Create a class ‘Student’, and inherit another class ‘Undergrad’ from this class.
The parent class Student shall have the following protected data members: name, ID, grade,
age, and address and a public method: boolean Passed (double grade)
The Passed () method willtake one parameter- grade (value between 0 and 100). If the grade
is above 70.0, then Passed() returns true, otherwise it returns false.
Input the grade using a public method accept () in the child class.*/


#include<iostream.h>//library header
#include<conio.h>//library header
class Student{//parent class
protected://access specifier
char name[90],ID[10],address[90];//declaration of variables
double grade,age;//declaration of variables
int Passed(double grade){ 
    
//Turbo C IDE doesn't support boolean keywords as it's an outdated and obsolete program
//So, we use int datatype to return either 0 or 1
                            
int false=0,true=1;//declaration of variables
if (grade>70.0){return true;}//if condition
else{return false;}

}

};


class Undergrad:public Student//derived class
{
int x;//declaration of variable

public://access specifier
void accept(){
cout<<"\n\nENTER YOUR DETAILS\n";//output
cout<<"Enter your ID : ";//output
cin>>ID;//input

cout<<"Enter your name : ";//output
cin>>name;//input

cout<<"Enter your address : ";//output
cin>>address;//input

cout<<"Enter your age : ";//output
cin>>age;//input

repeat:
cout<<"Enter your score : ";//output
cin>>grade;//input

if(grade>0 && grade<=100){//if condition
x=Passed(grade);
}
else {

    cout<<"Enter the score between 0 to 100!"<<endl;//output

    goto repeat;
}
cout<<"\n\nDETAILS OF THE EXAMINEE";//output
cout<<"\n\nID : "<<ID<<endl;//output
cout<<"NAME : "<<name<<endl;//output
cout<<"ADDRESS : "<<address<<endl;//output
cout<<"AGE : "<<age<<endl;//output
cout<<"EXAMINATION RESULT : ";//output

if(x==1){//if condition
cout<<"PASSED";//output

}

else{
cout<<"FAILED";//output


}

}



};

void main(){
clrscr();
Undergrad exam;
exam.accept();


    getch();
}