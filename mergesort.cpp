#include<iostream>
using namespace std;
void printarray(int a[],int  n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void merge(int *a,int s,int e)
{
	int temp[100];
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	while(i<=mid && j<=e)
	{
		if(a[i]<a[j])
		{
			temp[k]=a[i];
			i++;
		}
		else
		{
			temp[k]=a[j];
			j++;
		}
		k++;
	}
	//comdition  for any one array gets exhausted and the other array remains then just copy the rest of the element to temp array
	while(i<=mid)
	{
		temp[k]=a[i];
		k++;
		i++;
	}
	while(j<=e)
	{
		temp[k]=a[j];
		k++;
		j++;
	}
	for(i=s;i<=e;i++)
	{
		a[i]=temp[i];
	}
}

void mergesort(int a[],int s,int e)
{
	// base condition as there can be 1 element at last
	if(s>=e)
	{
		return ;
	}
	// else need to do 3 steps
	//1.divide
	int mid=(s+e)/2;
	//2.sort
	mergesort(a,s,mid);
	mergesort(a,mid+1,e);
	//3.merge 
	merge(a,s,e);
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
	cout<<"array is:\n";
	printarray(a,n);
	mergesort(a,0,n-1);
	cout<<"array sorted\n";
	printarray(a,n);
return 0;
}
