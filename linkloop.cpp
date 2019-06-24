#include<iostream>
#include<unordered_set>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
struct node* head=NULL;
struct node* head1=NULL;
struct node* getnewnode(int x)
{
	struct node* newnode=new node;
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}

void insert()
{
	int x;
	struct node* temp=head;
	cout<<"enter the element\n";
	cin>>x;
	struct node* newnode=getnewnode(x);
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;

		}
		temp->next=newnode;
	}
	
}
/*
void detect_loop()
{
	int flag=0;
	 
	struct node* slow=head;
	struct node* fast=head;
	head->next->next->next->next->next = head->next->next; 
	while(fast!=NULL slow!=NULL && fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(slow== fast)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		cout<<"loop found\n";
	}
	else
	{
		cout<<"not found\n";
	}
}*/
bool detect_loop()
{
	int l=0;
	struct node* h=head;
	unordered_set<node*> s;
	while(h!=NULL)
	{
		if(s.find(h)!=s.end())
		{
			l=1;
		}
		s.insert(h);
		h=h->next;
		else
		{
			l=0;
		}
	}

	if(l==1)
	{
		cout<<"loop found\n";
	}
	else
	{
		cout<<"not found\n";
	}
}
void display()
{
	struct node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	int ch;
	do{
	cout<<"\n1.insert() \n2.display() \n3.detect_loop()\n";
	cin>>ch;
	switch(ch)
	{
		case 1:insert();
			break;
		case 2:display();
			break;
		case 3:detect_loop();
			break;
		default:cout<<"invalid choice\n";
			break;
	
	}
	}while(ch!=6);
return 0;
}
