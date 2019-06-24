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
	int temp[n];
	int s=0;
	int e=n-1;

	int flag=true;	
	for(int i=0;i<n;i=i+2)
	{
		//if(flag)
			temp[i]=a[e--];
		//else
			temp[i+1]=a[s++];

		//flag!=flag;
	}
	for(int i=0;i<n;i++)
	{
		a[i]=temp[i];
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
