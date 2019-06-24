#include<iostream>
#include<cmath>
using namespace std;
double termOfGP(int A,int B,int N)
{
    //Your code here
    double nth;
    int r=B/A;
	cout<<r<<endl;
    //nth=a(r^n-1)
    nth=A*(pow(r,N-1));
    return nth;
    
}
int main()
{
	int a,b,n;
	cin>>a>>b>>n;
	double nth=termOfGP(a,b,n);
	cout<<floor(nth);
}
