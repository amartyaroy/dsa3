#include<iostream>
using namespace std;
struct node
{
	int data;
	int key;
};
void display(struct node a[],int n)
{
	cout<<"data"<<" "<<"key"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i].data<<" "<<a[i].key<<endl;
	}
}

int main()
{
	int temp,n,i;
	cout<<"enter size\n";
	cin>>n;
	struct node table[n];
	cout<<"enter the  element\n";
	for(i=0;i<n;i++)
	{
		cin>>temp;
		table[temp%n].data=temp;
		table[temp%n].key=temp%n;
	}
	cout<<endl;
	display(table,n);
return 0;
	
}

