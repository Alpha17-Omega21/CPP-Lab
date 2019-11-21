/*Create a class with a public function table () with an integer argument to print
the multiplication table of that argument. In the main function accept a number
from the user and call the function table ( ) to print the multiplication table.
*/

#include <iostream.h>
#include <conio.h>
class multiplication{
public:
void data(int num){

	for (int i=1;i<13;i++){
	
	cout<<num<<" * "<<i<<" = "<<i*num<<endl;
	
	}
}



};

int main(){
clrscr();
multiplication output;
int x;
cout<<"Enter the number of table you want to see "<<endl;
cin>>x;
output.data(x);


getch();
return 0;
}