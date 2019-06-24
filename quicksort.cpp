#include<iostream>
using namespace std;
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
//this function partition the array and then return partitioned index so that it can be further divided 
int partition(int  a[],int s,int e)
{
	int  pivot,pindex,temp,i;
	pivot=a[e];
	pindex=s;
	for(i=s;i<=e-1;i++)
	{
		if(a[i]<pivot)
		{
			//swap(a[i],a[pindex]);
			temp=a[i];
			a[i]=a[pindex];
			a[pindex]=temp;
		
			
			pindex++;
		}
	}
	//swap(a[pindex],a[e]);
	temp=a[pindex];
	a[pindex]=a[e];
	a[e]=temp;
	return pindex;
	
}
void quicksort(int a[],int s,int e)
{
	if(s<=e)
	{
		int pindex;
		pindex=partition(a,s,e);
		
		quicksort(a,s,pindex-1);
		quicksort(a,pindex+1,e);
	}
}
int main()
{
	int a[100],n,i;
	cin>>n;
	cout<<"enter the elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"the array is:\n";
	printarray(a,n);
	cout<<"the sorted array is:\n";
	quicksort(a,0,n-1);	
	printarray(a,n);
return 0;
}
