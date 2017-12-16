#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};

int main()
{
	
	struct node *head,*q,*p,*t;
	int i,n,a;
	cin>>n;
	head=NULL;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		p=new node;
		p->data=a;
		p->next=NULL;
		if(head==NULL)
			head=p;
		else 
			q->next=p;
		q=p;	
	}
	
	t=head;
	while(t!=NULL)
	{
		cout<<t->data<<" ";
		t=t->next;
	}
	
	return 0;
 } 
