//without extra space rearranging the elements
#include<iostream>
using namespace std;
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void rearrange(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		a[i]+=(a[a[i]%n])*n;
	}
	for(int i=0;i<n;i++)
	{
		a[i]/=n;
	}
	print(a,n);
}
int main()
{
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	rearrange(a,n);
}
