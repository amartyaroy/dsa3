#include<iostream>
using namespace std;
#include<cmath>
bool isPrime(int n)
{
    //Your code here
	int  i,flag=0;
    	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}	
		
	}
	if(flag==1)
	{
		return  false;
	}
	else
	{
		return true;
	}
        
}
int main()
{
	int n;
	cin>>n;
	if(isPrime(n))
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
return 0;
}
