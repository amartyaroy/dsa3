#include<iostream>
using namespace std;
int main()
{
	int test,binary,t,rem;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		int b=1,decimal=0;
		cin>>binary;
		t=binary;
		while(t!=0)
		{
			rem=t%10;
			decimal=decimal+(b*rem);
			b=b*2;
			t/=10;
		}
		cout<<decimal<<endl;
	}
return 0;
}
