/*Create class Books with data members book no, book name, author and
publisher and member functions getdata() and putdata(). Input the details of a
book using getdata() and output the details using putdata().
*/

#include <iostream.h>
#include <conio.h>
class Book{
private:
int book_num;
char book_name[90],author[50],publisher[25];
public:
void getdata(){

	cout<<"Enter the Book number "<<endl;
	cin>>book_num;
	cout<<endl<<"Enter the name of the book"<<endl;
	cin>>book_name;
	cout<<endl<<"Who is the author? "<<endl;
	cin>>author;
	cout<<endl<<"Who is the publisher? "<<endl;
	cin>>publisher;
}

void putdata(){

	cout<<endl<<"Book number : "<<book_num<<endl;
	cout<<endl<<"Book Name : "<<book_name<<endl;
	cout<<endl<<"Author : "<<author<<endl;
	cout<<endl<<"Publisher : "<<publisher<<endl;
}

};

int main(){
clrscr();
Book info;
info.getdata();
info.putdata();

getch();
return 0;
}