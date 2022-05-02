#include<iostream.h>
#include<conio.h>
void main()
{
	int factorial(int);
	int fact,value;
	clrscr();
	cout<<"enter the number:=";
	cin>>value;
	fact=factorial(value);
	cout<<"factorial of a number is :"<<fact;
	getch();
}


       int factorial(int n)
       {
		if (n==0)
		{

			return(1);
		}

		else
		{
			return (n*factorial(n-1));
		}
      }