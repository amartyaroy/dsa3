#include<iostream>
using namespace std;
long long cal_fact(int n)
{
	long long fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
return fact;
}
int main()
{
	int test,n,r;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		
		long long npr;
		cin>>n>>r;
		int d=n-r;
		long long numerator=cal_fact(n);
		long long denominator=cal_fact(d);
		npr=numerator/denominator;
		cout<<numerator<<" "<<denominator<<endl;
		cout<<npr<<endl;		
	}	
	
return 0;
}
