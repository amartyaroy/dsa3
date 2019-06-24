#include<iostream>
#include<vector>
using namespace std;
void insert_end(vector<int> v,int x)
{
	vector<int>::iterator it;
	v.insert(v.end(),x);
	for(it=v.begin();it!=v.end();++it)
	{
		cout<<*it;	
	}
}
int main()
{
	vector<int> v;
	int ele,n,x;
	cin>>n;
	cout<<"enter the array elements\n";
	for(auto i=0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	cout<<"enter an element at end\n";
	cin>>x;
	insert_end(v,x);
return 0;
}
