#include<iostream>
using namespace std;
int cal_nth_element(int a,int b,int n)
{
	int d=(b-a);
	int nth=a+((n-1)*d);
	return nth;
}
int main()
{
	int a,b,d,n,last;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		cin>>last;
		int res=cal_nth_element(a,b,last);
		cout<<"res="<<" "<<res<<endl;	
	}	
	
return 0;	
}

