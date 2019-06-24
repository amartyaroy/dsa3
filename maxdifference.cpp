
#include<iostream>
using namespace std;
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void maxdifference(int a[],int n)
{
	int max=-1;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[i]<a[j] && max<(j-i))
			{
				max=j-i;
			}
		}
	}
	cout<<max;
	//print(a,n);
}
int main()
{
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	maxdifference(a,n);
}
