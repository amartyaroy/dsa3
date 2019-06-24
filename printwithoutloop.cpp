#include<iostream>
using namespace std;
int print(int n)
{
	if(n<1)
	{
		return 1;
	}
	else
	{
		print(n-1);
		cout<<n;
	}
}
int main()
{
	int n;
	cin>>n;
	print(n);
return 0;
}
