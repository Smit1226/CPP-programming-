#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,t1=0,t2=1,nextterm=0;
	clrscr();

	cout<<"enter the number of terms : ";
	cin>>n;

	cout<<"fibonacci series:";

	for (i=1; i<=n; i++)
	{
		if(i==1)
		{
			cout<<"  "<<t1;
			continue;
		}
		if (i==2)
		{
			cout<<t2 <<"  ";
			continue;
		}

		nextterm= t1 + t2;
		t1 = t2;
		t2 = nextterm;

		cout<<nextterm<<"  ";
	}
	getch();
}