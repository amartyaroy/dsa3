//this is a program  that take input in an vector  and then group and then reverse based on group
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
void reversegroups(vector<int> v,int n,int k)
{
	vector<int>::iterator it;
	for(auto i=0;i<n;i=i+k)
	{
		auto left=i;
		//corner cases
		auto right=min(i+k-1,n-1);
		while(left<right)
		{
			swap(v[left++],v[right--]);	
		}
	}
	for(auto i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	
	
}
int main()
{
	vector<int> v;
	int n,x,k;
	cout<<"enter size:\n";	
	cin>>n;
	cout<<"enter group size:\n";
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	reversegroups(v,n,k);
return 0;
}
