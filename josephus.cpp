#include<iostream>
#include<vector>
using namespace std;
int find_pos(vector<int> v,int n,int k,int i)
{
	if(v.size()==1)
	{
		return v[0];
	}
	else
	{
		i=(i+(k-1))%v.size();
		v.erase(v.begin()+i);
		return find_pos(v,n,k,i);
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		v.push_back(i+1);
	}
	int res=find_pos(v,n,k,0);
	cout<<res<<endl;
}
