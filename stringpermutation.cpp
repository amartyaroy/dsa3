#include<iostream>
#include<set>
#include<iterator>
#include<string>
using namespace std;
void swap(char *x, char *y)  
{  
    char temp;  
    temp = *x;  
    *x = *y;  
    *y = temp;  
}  
void permutation(string s,int  l,int r)
{
	
	//1.first remove one element and then chech the element is in the list or what
	//if  not there then append the string in the set and then return
	 int i;  
    if (l == r)  
        cout<<s<<endl;  
    else
    {  
        for (i = l; i <= r; i++)  
        { 
            swap((s+l), (s+i));  
            permute(s, l+1, r);  
            swap((s+l), (s+i)); //backtrack  
        }  
    }  
}
int main()
{
	string s;
	cout<<"enter a string\n";
	getline(cin,s);
	//set<string> se;
	//se.insert(s);
	int n=s.length();
	permutation(s,0,n-1);
return 0;
	
}
