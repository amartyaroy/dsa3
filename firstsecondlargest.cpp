#include<iostream>
#include<list>
#include<iterator>
using namespace std;
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

void display(int a[],int n)
{
	cout<<"sorted\n";	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void mergesort(int a[],int s,int e)
{

	if(s>=e)
	{
		return ;
	}
	int mid=(s+e)/2;
	mergesort(a,s,mid);
	mergesort(a,mid+1,e);
	
	merge(a,s,e);
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
	mergesort(a,0,n-1);
	display(a,n);
return 0;	
}
