/*Create a class with public functions accept() to accept the value of resistance
and current and volt() to find the voltage. In the main function accept the values
of current and resistance. Using the above class find the voltage and display
the voltage in main function.
*/

#include <iostream.h>
#include <conio.h>
class electricity{
public:
float r,i,v;
void accept(float resistance,float current){

r=resistance;
i=current;


}
void volt(){
v=i*r;
cout<<endl<<"The voltage is "<<v<<"V";

}

};

int main(){
clrscr();
float resistance,current;
electricity output;
cout<<"Enter the resistance"<<endl;
cin>>resistance;
cout<<"Enter the current"<<endl;
cin>>current;
output.accept(resistance,current);
output.volt();

getch();
return 0;
}