#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	/*for(int i=n/2;i<=n;i++)
	{
		for(int j=1;j<=n/2;j++)
		{
			for(int k=1;k<=n;k=k*2)
			{
				cout<<"ravi\n";	
				count++;		
			}
		}
	}*/
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j=j+i)
		{
			cout<<"ravi\n";
			count++;
		}
	}
cout<<count;
return 0;
}
