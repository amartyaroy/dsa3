#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
/*struct mnode
{
	int data;
	struct mnode* next;
};*/
struct node* head=NULL;
struct node* head1=NULL;
struct node* getnewnode(int x)
{
	struct  node* newnode=new node;
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}
/*struct mnode* Getnewnode(int x)
{
	struct  mnode* newnode=new mnode;
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}*/
void insert_begin()
{
	int x,y;
	cout<<"enter the element\n";
	cin>>x;
	cout<<"enter the element for 2nd list\n";
	cin>>y;
	struct node* newnode=getnewnode(x);
	struct node* newnode1=getnewnode(y);	
	if(head==NULL)
	{
		head=newnode;	
		
	}
	else
	{
		newnode->next=head;
		head=newnode;
		
	}
	if(head1==NULL)
	{
		head1=newnode1;	
		
	}
	else
	{
		
		newnode1->next=head1;
		head1=newnode1;
	}
}
void insert_middle()
{
	int x,pos;
	struct node* ptr=new node;
	ptr=head;	
	cout<<"enter the element\n";
	cin>>x;
	cout<<"enter the pos\n";
	cin>>pos;
	struct node* newnode=getnewnode(x);
	if(head==NULL)
	{
		head=newnode;	
	}
	else
	{
		while(ptr->next->data!=pos)
		{
			ptr=ptr->next;
		}
		newnode->next=ptr->next;
		ptr->next=newnode;
	}
}
void insert_end()
{
	int x;
	struct node* ptr=new node;
	ptr=head;
	cout<<"enter the element\n";
	cin>>x;
	struct node* newnode=getnewnode(x);
	if(head==NULL)
	{
		head=newnode;	
	}	
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newnode;
	}
}
void delete_begin()
{
	struct node* temp=new node;
	temp=head;
	if(head==NULL)
	{
		cout<<"list is empty\n";
	}
	else
	{
		head=temp->next;
		free(temp);
		
	}
}
void delete_middle()
{
	int p;
	struct node* temp=head;
	struct node* ptr=head;
	cout<<"enter the element to delete\n";
	cin>>p;
	if(head==NULL)
	{
		cout<<"list empty\n";
	}
	else
	{
		while(temp->next->data!=p)
		{
			temp=temp->next;	
		}
		ptr=temp->next;
		temp->next=ptr->next;
	}
}
void delete_end()
{
	struct node* temp=head;
	if(head==NULL)
	{
		cout<<"list is empty\n";
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;	
		}
		temp->next=NULL;
	}

}
void swap(struct node* a,struct node* b)
{
	int temp=a->data;
	a->data=b->data;
	b->data=temp;
}
void sort()
{
	struct node* i=head;
	struct node* j;
	int temp;
	for(i=head;i->next!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(i->data>j->data)
			{
				temp=i->data;
				i->data=j->data;
				j->data=temp;
			}
		}
	}	
}	
void merge()
{
	struct node* mergeptr=NULL;
	mergeptr=head;
	while(mergeptr->next!=NULL)
	{
		mergeptr=mergeptr->next;
	}	
	mergeptr->next=head1;
	head1=head;
}
void display()
{
	struct node* ptr=NULL;
	ptr=head;
	struct node* ptr1=NULL;
	ptr1=head1;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"-->";
		ptr=ptr->next;
	
	}
	cout<<endl;
	cout<<"the second list is\n";
	while(ptr1!=NULL)
	{
		cout<<ptr1->data<<"-->";
		ptr1=ptr1->next;
	
	}
	cout<<endl;
}
int main()
{
	int ch;
	do
	{
		cout<<"MENU\n";
		cout<<"\n1.insert_begin() \n2.insert_middle() \n3.insert_end() \n4.delete_begin() \n5.delete_middle() \n6.delete_end() \n7.sort() \n8.merge() \n9.display()"<<endl;	
		cin>>ch;
		switch(ch)
		{
			case 1:insert_begin();
				break;
			case 2:insert_middle();
				break;
			case 3:insert_end();
				break;
			case 4:delete_begin();
				break;
			case 5:delete_middle();
				break;
			case 6:delete_end();
				break;
			case 8:merge();
				break;
			case 7:sort();
				break;
			case 9:display();
				break;
			default:
				cout<<"wrong choice\n";
				break;
		}
	}while(ch!=10);
return 0;
}
