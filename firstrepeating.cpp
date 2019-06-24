#include <iostream>
#include<set>
using namespace std;
void search(int a[],int n)
{
    set<int> s;
    int min=-1;
    for(int i=n-1;i>=1;i--)
    {
        if(s.find(a[i])!=s.end())
        {
            min=i;
        }
        else
        {
            s.insert(a[i]);
        }
    }
    if(min!=-1)
    {
        cout<<min;
    }
    else
    {
        cout<<-1;
    }

}

int main() {
	//code
    
    int test,i,n,a[100];
    cin>>test;
    while(test--)
    {
        cin>>n;
        
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
	search(a,n);	    
    }

	return 0;
}
