#include<iostream>
using namespace std;
int a[100],top=-1;
void push(int n)
{
	int x;
	cout<<"enter the stack element\n";
	cin>>x;
	/*if(top==-1)
	{
		cout<<"stack is empty";
	}*/	
	 if(top==n-1)
	{
		cout<<"stack overflow\n";
	}
	else
	{
		top++;
		a[top]=x;
	}	
}
void pop()
{
	if(top==-1)
	{
		cout<<"stack underflow\n";	
	}
	else
	{
		cout<<"popped\n"<<a[top];
		top--;

	}
}
void display()
{
	if(top==-1)
	{
		cout<<"stack empty\n";	
	}
	else
	{
		for(int i=0;i<=top;i++)
		{
			cout<<i<<"-----"<<a[i]<<endl;
		}
	}
}
int main()
{
	int ch,n;
	cout<<"enter the size of stack\n";
	cin>>n;
	do{
	cout<<"MENU\n";
	cout<<"\n1.push() \n2.pop \n3.display()\n";
	cin>>ch;
	
	switch(ch)
	{
		case 1:push(n);
			break;
		case 2:pop();
			break;
		case 3:display();
			break;
		default:cout<<"invalid choice\n";
			break;
	}
	}while(ch!=4);
}
