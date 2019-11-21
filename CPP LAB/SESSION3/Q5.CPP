/*India is playing a cricket match against Australia. Australia batted first. Their
run rate was 8.2. Now India is batting. Using a C++ program, accept the number
of overs bowled and the runs scored. Calculate the current run rate of India.
The run rate of a cricket match is calculated by dividing the total number of
runs scored against the total number of over bowled. If the current run rate is
above Australi, print "India has a chance to win". If run rate is below 6, print
“India has a little chance to win". If run rate is below 3, print "India has NO
chance to win".*/
#include<iostream.h>
#include<conio.h>
void main()
{
    float r,b,c;
    clrscr();
    cout<<"Australia batted first. Their run rate was 8.2.\n";
    cout<<"Now India is batting.\n";
    cout<<"Enter the number of overs bowled:";
    cin>>b;
    cout<<"Enter run scored:";
    cin>>r;
    c=r/b;
    cout<<"Current run rate:"<<c<<endl;
    if(c>8.2)
    {
	cout<<"India has a change to win"<<endl;
    }
    else if(c>3)
    {
	cout<<"\nIndia has a little chance to win\n";
    }
    else
    {
	cout<<"India has NO chance to win\n";
    }
    getch();
}