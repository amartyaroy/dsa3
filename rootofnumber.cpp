#include<iostream>
using namespace std;
#include<cmath>
void quadraticRoots(int a,int b, int c)
{
    int d;
   
   //Your code here
    if(a==0)
    {
        cout<<"Invalid";
    }
    else
    {
        d=(pow(b,2))-4*a*c;
        if(d>=0)
        {
            double root1,root2;
            root1=(-b+sqrt(d))/(2*a);
            root2=(-b-sqrt(d))/(2*a);
            if(root1>root2)
            {
                cout<<floor(root1)<<" "<<floor(root2);
            }
            else
            {
                cout<<floor(root2)<<" "<<floor(root1);
                
            }
        }
        else
        {
            cout<<"Imaginary";
            
        }
    }
   
   
   
   // Your don't need to printline
   // It will automatically be 
   // handled by driver code
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	quadraticRoots(a,b,c);
return 0;
}
