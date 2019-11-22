/*
Write a program to create a class - Book, to keep the records of books
available in your library. This program should have

i) Member functions to give and display the details such as book-code, title, publisher,
author and price of the books.

ii) Search function to search for a book name

Use object array to input details of 5 books.
*/

#include <iostream.h>//library header
#include <conio.h>//library header
#include <string.h>//library header
#include<stdio.h>//library header
class  Book{ //class creation
public: //access specifiers
int book_code,cost; //declaring the variables
char title[90],publisher[90],author[90]; //declaring the variables
void input_data(){//input_data() function

cout<<"BOOK CODE: "; //output
cin>>book_code;//input
cout<<"TITLE: "; //output
cin>>title;//input
cout<<"AUTHOR: "; //output
cin>>author;//input
cout<<"PUBLISHER: "; //output
cin>>publisher;//input
cout<<"PRICE: "; //output
cin>>cost;//input

}

void output_data(){//output_data() function

cout<<"BOOK CODE: "<<book_code<<endl; //output
cout<<"TITLE: "<<title<<endl; //output
cout<<"AUTHOR: "<<author<<endl; //output
cout<<"PUBLISHER: "<<publisher<<endl; //output
cout<<"PRICE: "<<cost<<endl; //output



}

void search(){//search() function



cout<<"Here's the search result: \n";//output

cout<<"BOOK CODE: "<<book_code<<endl;//output
cout<<"TITLE: "<<title<<endl;//output
cout<<"AUTHOR: "<<author<<endl;//output
cout<<"PUBLISHER: "<<publisher<<endl;//output
cout<<"PRICE: "<<cost;//output


}

};

void main(){
int f=0; //declaring the variables
    clrscr();// clears the screen
    char bname[90]; //declaring the variables
Book stuff[5];

//INPUT
cout<<"Enter the Book code, title, author, publisher and cost of 5 Books\n";//output
for (int i = 0; i < 2; i++) //for loop iteration
{  cout<<"Book No."<<i+1<<endl;//output
   stuff[i].input_data();
    cout<<endl;
}
cout<<"Press Enter ";//output
getch();
clrscr();// clears the screen

//OUTPUT
cout<<"The details of 5 Books are :\n\n";//output
for (i = 0; i < 2; i++) //for loop iteration
{  cout<<"Book No."<<i+1<<endl;//output
   stuff[i].output_data();
    cout<<endl;
}
cout<<"Press Enter ";//output
getch();
clrscr();// clears the screen

//BOOK SEARCH
cout<<"BOOK SEARCH\n";//output
cout<<"Enter the name of the book: ";//output
cin>>bname; //input
for (i = 0; i < 2; i++) //for loop iteration
{

    if(strcmp(stuff[i].title,bname)==0){// checks the condition
	f=1;
	stuff[i].search();
	}
}
    if(f==0)// checks the condition
    {
	cout<<"No such book was found....";//output

    }



    getch();
}