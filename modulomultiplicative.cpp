#include<iostream>
using namespace std;
int modulo(int a,int m)
{
	 a = a%m; 
    for (int x=1; x<m; x++) 
       if ((a*x) % m == 1) 
          return x; 
}

int main()
{
	int a,m;
	cin>>a>>m;
	int res=modulo(a,m);
	cout<<res;
return 0;
}
