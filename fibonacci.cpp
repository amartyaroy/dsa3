#include<iostream>
using namespace std;
int fib(int n)
{
	/*int a[n],i;
	a[0]=0;
	a[1]=1;
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
		cout<<a[i];	
	}
	
	cout<<"value is:\n"<<a[n-1];*/
	if(n<=1)
		return n;
	else
		return fib(n-1)+fib(n-2);
	
}
int main()
{
	int n;	
	cin>>n;
	int res=fib(n);
	cout<<res;
return 0;

}
