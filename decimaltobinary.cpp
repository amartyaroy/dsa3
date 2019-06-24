#include<iostream>
using namespace std;
void bin(unsigned int  n)
{
	if(n>1)
	{
		bin(n/2);
		
	}
	
	cout<<n%2;
	
}
int main()
{
	int n;
	cout<<"enter the decimal number\n";
	cin>>n;
	bin(n);
}
