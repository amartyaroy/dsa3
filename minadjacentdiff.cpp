#include<iostream>
#include<cmath>
using namespace std;
void minadjdiff(int a[],int n)
{
	int res;
	
	res=abs(a[1]-a[0]);
	//for rest elements from i=2 to n-1
	for(int i=2;i<n;i++)
	{
		res=min(res,abs(a[i]-a[i-1]));
	}
	
	res=min(res,abs(a[n-1]-a[0]));
	
	cout<<res;

}

int main()
{
	int a[100], n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	minadjdiff(a,n);	
return 0;
}
