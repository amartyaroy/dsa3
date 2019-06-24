#include<iostream>
using namespace std;
int main()
{
	int gcd=1;
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
	int n1,n2;
	    cin>>n1>>n2;
	    for(int i=1;i<=n1 && i<n2 ;++i)
    	{
		if((n1%i==0) && (n2%i==0))
	    	{
			    gcd=i;
	    	}
    	}
	cout<<gcd<<endl;
	}
return 0;
} 
