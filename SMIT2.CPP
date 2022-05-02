#include<iostream.h>
#include<conio.h>
void main()
{
	int sci,maths,hindi,sum;
	float per;
	clrscr();
	cout<<"enter the sci marks :=";
	cin>>sci;

	cout<<"enter the maths marks:=";
	cin>>maths;

	cout<<"enter the hindi marks:=";
	cin>>hindi;

	sum=sci+maths+hindi;
	per=sum/3;

	cout<<"sum is :="<<sum;
	cout<<"\nper is :="<<per;

	if (sci>=35 && maths>=35 && hindi>=35)
	{
	cout<<"\nyou are passed";
	}

	else
	{
	cout<<"\nyou are failed";
	}


	getch();
}