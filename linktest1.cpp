#include<iostream>
using namespace std;
//this creates a strcuture  of type node
struct node
{
	int data;
	struct node* next;
	struct node* prev;
};

struct node* head=NULL;
struct node* head1=NULL;
//this function creates  a node of type node*
struct node* getnewnode(int x)
{
	struct node* newnode=new node;
	newnode->data=x;
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;

}
//this function inserts element at the begin of the list
void insert_begin()
{
	int x,y;
	cout<<"enter the element\n";
	cin>>x;
	cout<<"enter the second list element\n";
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
		head->prev=newnode;
		head=newnode;
	}
	if(head1==NULL)
	{
		head1=newnode1;
	}
	else
	{
		newnode1->next=head1;
		head1->prev=newnode1;
		head1=newnode1;
	}
}
//this function inserts element at a particulcar position of the list
void insert_middle()
{
	int x,pos;
	cout<<"enter the element\n";
	cin>>x;
	cout<<"enter the pos\n";
	cin>>pos;
	struct node* newnode=getnewnode(x);
	struct node* temp=NULL;
	temp=head;	
	struct node* temp1=NULL;
	temp1=head;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		while(temp->next->data!=pos)
		{
			temp=temp->next;
		}
		temp1=temp->next;
		newnode->prev=temp1->prev;
		newnode->next=temp->next;
		temp->next=newnode;
		temp1->prev=newnode;	
	}
		
}
//this function inserts an  element from the end 
void insert_end()
{
	int x;
	struct node* temp=head;
	struct node* temp1=head;
	cout<<"enter the element\n";
	cin>>x;
	struct node* newnode=getnewnode(x);
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		temp1=temp->next;
		newnode->prev=temp->next;		
		temp1->next=newnode;
		
	}
}
//this is a fuction that deletes an element from the beginning of the list
void delete_begin()
{
	struct node* temp=NULL;
	temp=head;
	if(head==NULL)
	{
		cout<<"list is empty";
	}	
	else
	{
		temp=temp->next;
		head=temp;
	}
}
//this is a fucntion that deletes an element from a particular position
void delete_middle()
{
	int pos;
	struct node* temp=head;
	struct node* temp1=head;
	cout<<"enter the element to be deleted\n";
	cin>>pos;
	if(head==NULL)
	{
		cout<<"the list is empty\n";
	}
	else
	{
		while(temp->next->data!=pos)
		{
			temp=temp->next;
		}
		temp1=temp->next->next;
		temp->next=temp->next->next;
		temp1->prev=temp->next->prev;
		
	}
}
//this is  a function that deletes an element from the end of the link list
void delete_end()
{
	struct node* temp=head;
	if(head==NULL)
	{
		cout<<"the list is empty\n";
	}
	else
	{
		if(temp->next==NULL)
		{
			head=NULL;	
			cout<<"the last node deleted\n";		
		}	
		else{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=NULL;
	}
	}
}
//this is a function that sorts the list completely
void sort()
{
	struct node* i=head;
	struct node* j;
	for(i=head;i->next!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(i->data>j->data)
			{
				swap(i->data,j->data);
				
			}	
		}
	}
	cout<<"swapped\n";
}
//this is a function that merges two link list together
void merge()
{
	struct node* ptr=head;
	struct node* ptr1=head1;
	if(head==NULL && head1==NULL)
	{
		cout<<"cannot merge";	
	}
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=ptr1;
		head1=head;
	}
}
//this is a function that displays all the elements of the link list from left to right
void display()
{
	struct node* ptr=NULL;
	ptr=head;
	struct node* ptr1=head1;
	cout<<"firstlist\n";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"-->";
		ptr=ptr->next;
	}
	cout<<endl;
	cout<<"second list\n"	;
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
