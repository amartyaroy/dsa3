#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"enter a string\n";
	getline(cin,str);
	cout<<"the strings is:\n";
	cout<<str;
	cout<<endl;
	str.push_back('s');
	cout<<"new string\n"<<str;
	str.pop_back();
	cout<<str<<endl;
	str.resize(10);
	cout<<"string after resize\n"<<str;
	cout<<"capacity\n"<<str.capacity();
	//cout<<"shrinktofit\n"<<str.shrink_to_fit();
	
return 0;
}
