#include<iostream>
using namespace std;
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int i,n,hashsize,index;
	cin>>n>>hashsize;
	int a[n],hash[hashsize];
	for( i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<hashsize;i++)
	{
		hash[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		index=(a[i]%hashsize);
		cout<<index;
		if(hash[index]==-1)
		{
			hash[index]=a[i];
		}
		//else
		//{
			index++;
	
			hash[index]=a[i];	
		//}
	}
print(hash,hashsize);

	
}
