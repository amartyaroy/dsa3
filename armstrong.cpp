#include<iostream>
#include<cmath>
using namespace std;
int check_armstrong(int num)
{
    int t=num,rem,sum=0;
    	//t=num;
	while(t!=0)
	{
		rem=t%10;
		sum=sum+pow(rem,3);
		t=t/10;
		
	}
	if(sum==num)
	{
	    return 1;
	    
	}
	else
	{
	    return 0;
	    
	}
    
}
int main()
{
	int num,sum=0,t,rem,cases,res;
	cin>>cases;
	for(int i=0;i<cases;i++)
	{
	    cin>>num;
	   res=check_armstrong(num);
	if(res==1)
	{
		cout<<"Yes";
	}
	else
	{

		cout<<"No";
	}
	}

	

return 0;
}
