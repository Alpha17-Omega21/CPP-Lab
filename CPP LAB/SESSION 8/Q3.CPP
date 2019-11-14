/*
Write a program to create a class - Book, to keep the records of books
available in your library. This program should have

i) Member functions to give and display the details such as book-code, title, publisher,
author and price of the books.

ii) Search function to search for a book name

Use object array to input details of 5 books.
*/

#include <iostream.h>
#include <conio.h>
#include <string.h>
#include<stdio.h>
class  Book{
public:
int book_code,cost;
char title[90],publisher[90],author[90];
/*int f;
      Book()
      {
	 f=0;
      }*/
void input_data(){

cout<<"BOOK CODE: ";
cin>>book_code;
cout<<"TITLE: ";
cin>>title;
cout<<"AUTHOR: ";
cin>>author;
cout<<"PUBLISHER: ";
cin>>publisher;
cout<<"PRICE: ";
cin>>cost;

}

void output_data(){

cout<<"BOOK CODE: "<<book_code<<endl;
cout<<"TITLE: "<<title<<endl;
cout<<"AUTHOR: "<<author<<endl;
cout<<"PUBLISHER: "<<publisher<<endl;
cout<<"PRICE: "<<cost<<endl;



}

void search(){



cout<<"Here's the search result: \n";

cout<<"BOOK CODE: "<<book_code<<endl;
cout<<"TITLE: "<<title<<endl;
cout<<"AUTHOR: "<<author<<endl;
cout<<"PUBLISHER: "<<publisher<<endl;
cout<<"PRICE: "<<cost;


}

};

void main(){
int f=0;
    clrscr();
    char bname[90];
Book stuff[5];

//INPUT
cout<<"Enter the Book code, title, author, publisher and cost of 5 Books\n";
for (int i = 0; i < 2; i++)
{  cout<<"Book No."<<i+1<<endl;
   stuff[i].input_data();
    cout<<endl;
}
cout<<"Press Enter ";
getch();
clrscr();

//OUTPUT
cout<<"The details of 5 Books are :\n\n";
for (i = 0; i < 2; i++)
{  cout<<"Book No."<<i+1<<endl;
   stuff[i].output_data();
    cout<<endl;
}
cout<<"Press Enter ";
getch();
clrscr();

//BOOK SEARCH
cout<<"BOOK SEARCH\n";
cout<<"Enter the name of the book: ";
cin>>bname;
for (i = 0; i < 2; i++)
{
//   stuff[i].search(bname);
//   if(stuff[i].book_code==
    if(strcmp(stuff[i].title,bname)==0){
	f=1;
	stuff[i].search();
	}
}
    if(f==0)
    {
	cout<<"No found....";

    }



    getch();
}