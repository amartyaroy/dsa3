#include<iostream>
#include<cmath>
using namespace std;
int digitsInFactorial(int n)
{
    //Your code here
if (n < 0)
return 0;

// base case
if (n <= 1)
return 1;

// else iterate through n and calculate the
// value
double digits = 0;
for (int i=2; i<=n; i++)
digits += log10(i);
cout<<digits;

return floor(digits) + 1; 
}
int main()
{
	int n;
	cin>>n;
	int c=digitsInFactorial(n);
	cout<<"count:"<<c;
return 0;
}
