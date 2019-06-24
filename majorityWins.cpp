#include<iostream>
using namespace std;
void majorityWins(int a[], int n, int x,int y)
{
    int countx=0;//counter to count frequency of x
    int county=0;//counter to count frequency of y
    for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			countx++;
		}
		else if(a[i]==y)
		{
			county++;
		}
		else /*if(countx==county)*/	
		{
			/*if(x<y)
			{
				cout<<x;		
			}
			else
			{
				cout<<y;		
			}*/
		}
	}
    

    
    if(countx>county)
    {
		cout<<countx;
	}
    else if(county>countx)
    {
		cout<<county;
	}
    else
    {
		if(x<y)
		{
			cout<<x;
		}
		else
		{
			cout<<y;
		}
	}
    
}
int main()
{
	int n,a[10000],x,y;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	cout<<"enter the value of x and y\n";
	cin>>x>>y;
	majorityWins(a,n,x,y);
return 0;
}
