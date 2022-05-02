#include<iostream.h>
#include<conio.h>
void main()
{
		int i,j,no;
		clrscr();
		cout<<"enter the no :=";
		cin>>no;

		for(i=1;i<=no;i++)
		{

			for(j=1;j<=no;j++)
			{
				if(i==1 || j==1 || i==no)
				{
					cout<<" *";
				}
				else
				{
					cout<<"  ";
				}

		}
			cout<<"  ";

			for(j=1;j<=no;j++)
			{
				if(j==1 || i==j )
			{
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}

		for(j=no;j>=1;j--)
		{
			if(i==j || j==1 )
			{
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}
			cout<<"  ";
		for(j=1;j<=no;j++)
		{
			if(i==1 || j==3)
			{
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}

		}
			cout<<"  ";
		for(j=1;j<=no;j++)
		{
			if(i==1 || j==3)
			{
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}

		}

			cout<<"\n";
	}


	for(i=1;i<=no;i++)
	{

		for(j=1;j<=no;j++)
		{
			if(i==no || j==no)
			{
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}

		}
			cout<<"  ";

		for(j=1;j<=no;j++)
		{
			if(j==1  )
			{

				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}
		for(j=1;j<=no;j++)
		{
			if(j==no)
			{

				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}
			 cout<<"  ";

		for(j=1;j<=no;j++)
		{
			if(j==3 || i==no)
			{

				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}
			cout<<"  ";

		for(j=1;j<=no;j++)
		{
			if(j==3)
			{
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
       }
       getch();
}

