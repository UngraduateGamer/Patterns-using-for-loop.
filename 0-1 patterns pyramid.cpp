# include<iostream>
using namespace std;
int main()
{
	int n=5;
static int count;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{  
		    if ((i+j)%2==0)
		    {
		        cout<<"1 ";
		    }
		    else
		    {
		        cout<<"0 ";
		    }
		}
		cout<<"\n";
	}
	return 0;
}
