#include<iostream>
using namespace std;
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void reverse(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			swap(a[i],a[j]);
		}
	}
}
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//largestAndSecondLargest(a,n);
	reverse(a,n);
	display(a,n);
return 0;	
}
