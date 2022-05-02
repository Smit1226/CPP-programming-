#include<iostream.h>
#include<conio.h>
void main()
{
	int ch1,ch2,ch3,ba,eco,acc,maths,phy,chem,sum;
	float per;
	clrscr();
	cout<<"for commerce enter 1 \n for science enter 2 \n enter your choice :=";
	cin>>ch1;
	switch(ch1)
	{
		case 1:
		cout<<"1.bcom\n 2.bba\n 3.bca\n";
		cout<<" for bca enter 3\n enter your choice :=";
		cin>>ch2;

		switch(ch2)
		{
		case 3:
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

		default :
		cout<<"wrong choice";
		}
		break ;





		case 2 :
		cout<<"1.bcom\n 2.bba\n 3.bca\n";
		cout<<" for bca enter 3\n enter your choice :=";
		cin>>ch3;

		switch(ch3)
		{
		case 3 :
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

	}
	getch();
}

