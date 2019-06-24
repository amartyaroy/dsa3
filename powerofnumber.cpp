#include<iostream>
#include<cmath>
using namespace std;
int rev(int n)
{
	int rev=0,rem;
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;	
	}
	return rev;
}
long long power(int n,int r)
{
	//long long p=pow(n,r);
	cout<< power(n*r,r-1);
}
int main()
{
	int n;
	cin>>n;
	int r=rev(n);
	long long res=power(n,r);
	cout<<res;
return 0;
}
