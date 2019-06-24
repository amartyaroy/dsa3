#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	string str,str1;
	cout<<"enter the 1st strings\n";
	getline(cin,str);
	cout<<"enter the 2nd strings\n";
	getline(cin,str1);
	cout<<"string1:\n"<<str<<"\nstrings2:\n"<<str1;
	int res=str.compare(str1);
	if(res==0)
	{
		cout<<"strings equal\n";
	}
	else
	{
		cout<<"not equal\n";
	}
return 0;
}
