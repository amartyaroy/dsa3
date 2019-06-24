#include<iostream>
using namespace std;
int a[100],rear=-1,front=0;
void push_from_back(int n)
{
	int x;
	cout<<"enter the elements\n";
	cin>>x;
	if(rear==n-1)
	{
		cout<<"queue overlow\n";
	}
	else
	{
		rear++;
		a[rear]=x;
	}
}
void pop_from_front()
{
	if(front==rear)
	{
		cout<<"queue underflow\n";
	}
	else
	{
		cout<<"popped:"<<" "<<a[front];
		front++;	
	}
}
void display()
{
	cout<<"queue element\n";
	for(int i=front;i<=rear;i++)
	{
		cout<<a[i]<<" ";
	}

}
int main()
{
	int ch,n;
	cout<<"enter the size of the queue\n";
	cin>>n;
	do{
	cout<<"MENU\n";
	cout<<"\n1.enqueue \n2.dequeue \n3.display()\n";
	cin>>ch;
	switch(ch)
	{
		case 1:push_from_back(n);
			break;
		case 2:pop_from_front();
			break;
		case 3:display();
			break;
		default:cout<<"invalid input\n";
			break;
	}
	}while(ch!=4);
}
