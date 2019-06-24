#include<iostream>
using namespace std;
long long cal_gcd(int n1,int n2)
{
	long long gcd;
	for(int i=1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;
		}
	}
return gcd;
}
long long cal_lcm(int n1,int n2)
{
	long long lcm;
	if(n1>n2)
	{
		lcm=n1;
	}	
	else
	{
		lcm=n2;
	}
	while(1)
	{
		if(lcm%n1==0 && lcm%n2==0)
		{
			cout<<" ";
			break;		
		}
		lcm++;
	}
return lcm;
}
int main()
{
	int test,num1,num2;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		cin>>num1>>num2;
		int gcd=cal_gcd(num1,num2);
		int lcm=cal_lcm(num1,num2);
		cout<<gcd<<endl;
		cout<<lcm<<endl;
	}
return 0;
}
