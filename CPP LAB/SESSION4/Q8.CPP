/*Create a class with a function that counts the number of words in a string.
Pass the string as argument to function. Use return.*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class strng{

public:
	int word_count(char str[200]){

	int n=strlen(str);
	int words=0;
	for(int i=0;i<=n;i++)
	{
		if(str[i]==' ')
		{
			words++;
		}
	}

	return words+1;
}

};

void main()
{
	clrscr();
	char str[200];
	int num;
	strng one;
	cout<<"Enter a string:";
	gets(str);
	num=one.word_count(str);
	cout<<"The number of words in a string is "<<num;
   getch();
}
