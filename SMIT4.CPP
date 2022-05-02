#include<iostream.h>
#include<conio.h>
void main()
{
	int ch,ba,eco,acc,maths,phy,chem,sum;
	float per;
	clrscr();
	cout<<"for commerce enter 1 \n for science enter 2 \n enter your choice :=";
	cin>>ch;
	switch(ch)
	{
		case 1:
		cout<<"enter your commerce marks\n";
		cout<<"enter eco marks :=";
		cin>>eco;
		cout<<"enter ba marks :=";
		cin>>ba;
		cout<<"enter acc marks :=";
		cin>>acc;
		sum=eco+acc+ba;
		per=sum/3;
		cout<<"sum is = "<<sum;
		cout<<"\nper is = "<<per;
		break;

		case 2 :
		cout<<"enter your science marks\n";
		cout<<"enter maths marks :=";
		cin>>maths;
		cout<<"enter phy marks :=";
		cin>>phy;
		cout<<"enter chem marks :=";
		cin>>chem;
		sum=maths+phy+chem;
		per=sum/3;
		cout<<"sum is = "<<sum;
		cout<<"\nper is ="<<per;
		break;



		default:
			cout<<"wrong choice";

	}
	getch();
}

