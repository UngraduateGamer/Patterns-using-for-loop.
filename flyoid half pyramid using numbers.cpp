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
		    
		    count++;
		    cout<<count<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
