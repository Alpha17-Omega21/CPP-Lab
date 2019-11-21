/*5.Create an overloaded function called product()
 to find the product of two integer numbers,
 three integer numbers and two floating numbers.*/
  #include<iostream.h>
 #include<conio.h>
class Number
{

// int i,n,m;	//Declaring variables
public:

  void product(int m,int n)

     {
	cout<<"\nTwo integers numbers are "<<m*n<<endl;
     }
  void product(int m,int n,int o)

    {
      cout<<"\nThree integers numbers are "<<m*n*o<<endl;
    }
  void product(float x,float y)

   {
   cout<<"\nTwo floating numbers are "<<x*y<<endl;
   }


};
void main()
{
clrscr();
int m,n,o,w,z;
float x,y;


Number P;
	cout<<"Enter two integers numbers :"<<endl;
	cin>>w>>z;
	P.product(w,z);

	cout<<"\nEnter three integers numbers :"<<endl;
	cin>>m>>n>>o;
	P.product(m,n,o);

	cout<<"\nEnter two floating numbers  : "<<endl;
	cin>>x>>y;
    P.product(x,y);

getch();
}