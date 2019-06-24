//this is insert at the end of the array without using vector
#include<iostream>
#include<iterator>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
void insert_at_end(int a[],int n,int x,int index)
{
	if(index==n-1)
	{
		a[index]=x;
	}
	else
	{
		for(int i=n-2;i>=index;i--)
		{
			a[i+1]=a[i];
		}
		a[index]=x;
	}
display(a,n);
}
int main()
{
	int a[10],n,x,pos;
	cin>>n;
	cout<<"enter the array elements\n";
	for(int i=0;i<=n-2;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the element to be entered\n";
	cin>>x;
	cout<<"enter the index\n";
	cin>>pos;
	insert_at_end(a,n,x,pos);
return 0;
}
