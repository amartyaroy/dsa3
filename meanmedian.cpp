#include<iostream>
#include<numeric>
#include <bits/stdc++.h> 
using namespace std;
/*void sort(int a[],int n)
{
	int temp;
	for(int k=0;k<=n-1;k++)
	{
		for(int i=1;i<=n-k-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		}
	}
}*/
int median(int a[],int n)
{
	int res,mid;
	mid=n/2;
	sort(a,a+n);
	if(n%2==0)
	{
		 
		return((int)((a[mid]+a[mid-1])/2));		
	}
	else
	{
		return((int)(a[mid]));
	}

}
int mean(int a[],int n)
{
	int sum=0;

	
	 int res= accumulate(a, a+n, sum);
	return ((int)(res/n));
}
int main()
{
	int n,a[100],temp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	// here the array is being sorted
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "; // just for checking the sorted array
	}
	cout<<endl;
	// calling the mean function and then displaying the mean retured by the function
	int  m=mean(a,n);
	int me=median(a,n);
	cout<<"mean"<<m<<endl;
	cout<<"median"<<me<<endl;
}
