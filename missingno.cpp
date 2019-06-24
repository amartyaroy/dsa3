// this is a program  that finds the missing number from an array
#include<iostream>
using namespace std;
long long check(long long a[],long long b[],long  n,long n1)
{
	long long sum1=0,sum2=0;
	for(int i=1;i<=n;i++)
	{
		sum1=sum1+a[i];
	}
	for(int i=1;i<=n1;i++)
	{
		sum2=sum2+b[i];	
	}
	cout<<sum1;
	cout<<sum2;
	long long c=sum1-sum2;
	
return c;
}
int main()
{
	long long test,j,i,a[100000],n,b[10000];
	cin>>test;
	for(int j=0;j<test;j++)
	{
		cin>>n;
		for(i=1;i<=n;i++)
		{
			a[i]=i;
		}
		for(i=1;i<=n-1;i++)
		{
			cin>>b[i];
		}
	

		long long miss=check(a,b,n,n-1);
		cout<<miss<<endl;	
	}
return 0;
}
