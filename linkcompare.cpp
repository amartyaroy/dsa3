#include<iostream>
#include<string>
#include<cstring>
using namespace std;

struct node
{
	string data;
	struct node* next;
};
struct node* head=NULL;
struct node* head1=NULL;
struct node* getnewnode(string x)
{
	struct node* newnode=new node;
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}
void insert()
{
	string x,y;
	cout<<"enter the string for 1st list\n";
	cin>>x;
	cout<<"enter the string for 2st list\n";
	cin>>y;
	struct node* newnode=getnewnode(x);
	struct node* newnode1=getnewnode(y);
	struct node* temp=head;
	struct node* temp1=head1;
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
	if(head1==NULL)
	{
		head1=newnode1;
	}
	else
	{
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=newnode1;
	}
}
int check(string x,string y)
{
	int ret=x.compare(y);
	return ret;
}
void compare()
{
	int res[100],i=0,flag=0;
	struct node* temp=head;
	struct node* temp1=head1;
	while(temp!=NULL || temp1!=NULL)
	{
		 res[i]=check(temp->data,temp1->data);
		//cout<<res;
		temp=temp->next;
		temp1=temp1->next;
		i++;
			
	}
	int n=sizeof(res)/sizeof(res[0]);
	for(i=0;i<n;i++)
	{
		//cout<<res[i]<<" "<<endl;;
		if(res[i]==1)
		{
			flag=1;
		}
	
	}
	if(flag==0)
	{
		cout<<"list same\n";
	}
	else
	{
		cout<<"not same\n";
	}
	
}
void display()
{
	struct node* temp=head;
	struct node* temp1=head1;
	cout<<"first list\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	cout<<endl;
	cout<<"second list\n";
	while(temp1!=NULL)
	{
		cout<<temp1->data<<"-->";
		temp1=temp1->next;
	}
	cout<<endl;
}
int main()
{
	int ch;
	do{
	cout<<"\n1.insert() \n2.display() \n3.compare \n ";
	cin>>ch;
	switch(ch)
	{
		case 1:insert();
			break;
		case 2:display();
			break;
		case 3:compare();
			break;
		default:
			cout<<"invalid choice\n";
			break;
	
	}
	}while(ch!=4);
return 0;
}	
