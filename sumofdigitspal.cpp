#include<iostream>
using namespace std;
int main()
{
	int num,test,t,t1,rem;	
	cin>>test;
	for(int i=0;i<test;i++)
	{
		int sum=0,rev=0;
		cin>>num;
		t=num;
		while(t!=0)
		{
			rem=t%10;
			sum=sum+rem;
			t=t/10;
		}
		cout<<sum<<endl;
		t1=sum;
		while(t1!=0)
		{
			rem=t1%10;
      			rev= (rev*10) +rem;
    			t1 = t1/10;
		}
		cout<<rev<<endl;
		if(sum==rev)
		{
			cout<<"Yes"<<endl;
		}		
		else
		{
			cout<<"No"<<endl;
		}
	}
	
return 0;	
}
