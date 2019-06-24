//this is a program  that take input in an vector  and then group and then reverse based on group
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

}
void rotatebyone(int a[],int n,int temp[])
{
	
	
}
void rotatearray(int a[],int n,int k)
{
	int temp[n];
	for(int i=0;i<k;i++)
	{
		temp[i]=a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		
		a[i]=a[i+k];
	
	}
	int s=n-k,e=n-1;	
	int b=0;
	while(s<=e)
	{
		a[s++]=temp[b++];
	}
	
	print(a,n);

		
}
int main()
{
	int n,x,k,a[100];
	cout<<"enter size:\n";	
	cin>>n;
	cout<<"enter group size:\n";
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];

	}
	rotatearray(a,n,k);
return 0;
}
