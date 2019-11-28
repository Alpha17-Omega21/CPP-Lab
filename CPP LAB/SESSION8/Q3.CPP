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

private:
int book_code,cost; //declaring the variables
char publisher[90],author[90];
char title[90]; //declaring the variables

public: //access specifiers

void input_data(){//input_data() function

cout<<"BOOK CODE: "; //prompt
cin>>book_code;//input
cout<<"TITLE: "; //prompt
cin>>title;//input
cout<<"AUTHOR: "; //prompt
cin>>author;//input
cout<<"PUBLISHER: "; //prompt
cin>>publisher;//input
cout<<"PRICE: "; //prompt
cin>>cost;//input

}

void output_data(){//prompt_data() function

cout<<"BOOK CODE: "<<book_code<<endl; //prompt
cout<<"TITLE: "<<title<<endl; //prompt
cout<<"AUTHOR: "<<author<<endl; //prompt
cout<<"PUBLISHER: "<<publisher<<endl; //prompt
cout<<"PRICE: "<<cost<<endl; //prompt



}

int search(char bname[90]){//search() function
int attempt;
int diff = strcmpi(title,bname);

if (diff==0){
attempt=0;
cout<<"Here's the search result: \n";//prompt

cout<<"BOOK CODE: "<<book_code<<endl;//prompt
cout<<"TITLE: "<<title<<endl;//prompt
cout<<"AUTHOR: "<<author<<endl;//prompt
cout<<"PUBLISHER: "<<publisher<<endl;//prompt
cout<<"PRICE: "<<cost;//prompt


return attempt;
}
else{

attempt=1;
return attempt;

}

}

};

void main(){
 //declaring the variables
    clrscr();// clears the screen
    char bname[90]; //declaring the variables
    int n=5;
Book stuff[5];

//INPUT
cout<<"Enter the Book code, title, author, publisher and cost of 5 Books\n";//prompt
for (int i = 0; i < n; i++) //for loop iteration
{  cout<<"Book No."<<i+1<<endl;//prompt
   stuff[i].input_data();
    cout<<endl;
}
cout<<"Press Enter ";//prompt
getch();
clrscr();// clears the screen

//prompt
cout<<"The details of 5 Books are :\n\n";//prompt
for (i = 0; i < n; i++) //for loop iteration
{  cout<<"Book No."<<i+1<<endl;//prompt
   stuff[i].output_data();
    cout<<endl;
}
cout<<"Press Enter ";//prompt
getch();
clrscr();// clears the screen

//BOOK SEARCH
cout<<"BOOK SEARCH\n";//prompt
cout<<"Enter the name of the book: ";//prompt
cin>>bname; //input
int trial=0;
for (i = 0; i < n; i++) //for loop iteration
{
    int attempt=stuff[i].search(bname);
    if (attempt==0){
	trial=0;
	break;
    }
    else
    {
	trial++;
    }


}

if (trial!=0){

    cout<<"No such book was found....";//prompt

}


    getch();
}
