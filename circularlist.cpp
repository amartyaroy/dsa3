#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;      
};
struct node* head=NULL;
struct node* getnewnode(int x)
{
	struct node* newnode=new node;
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}
//this is a function that add an element at the begin of the list
void insert_begin()
{
	struct node* temp=new node;
	temp=head;
	int x;
	cout<<"enter the element\n";
	cin>>x;
	struct node* newnode=getnewnode(x);
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
		
	}
	else
	{
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=head;
		head=newnode;
	}
	
	
}
//this is a function that add an element at the end of the list 
void insert_end()
{
	int x;
	struct node* temp=head;
	cout<<"enter the element\n";
	cin>>x;
	struct node* newnode=getnewnode(x);
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
		
	}
	else
	{
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=head;
	temp=newnode;
	}
}
void display()
{
	struct node* ptr=head;
	while(ptr!=head)
	{
		cout<<ptr->data<<"-->";
		ptr=ptr->next;
	}
	cout<<endl;
}
int main()
{
	int ch;
	do{
	cout<<"\n1.insert_begin()() \n2.insert_end() \n3.display()\n";	
	cin>>ch;
	switch(ch)
	{
		case 1:insert_begin();
			break;
		case 2:insert_end();
			break;
		case 3:display();
			break;
		default:cout<<"invalid choice\n";
			break;
	}
	}while(ch!=4);
}
