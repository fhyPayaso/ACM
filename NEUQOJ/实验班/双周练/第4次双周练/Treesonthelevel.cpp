#include<iostream>
#include<queue>
#include<cstring>
#include<vector>
using namespace std;
int f;
char str[1005];
vector<int > res;
struct node
{
	int val;
	bool flag;
	node *left,*right;
	node():flag(false),left(NULL),right(NULL) {}
};

node * root;

node * newnode()
{
	return new node();
}

void addnode(int v,char *s)
{
	int len=strlen(s);
	
	node *u=root;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='L')
		{
			if(u->left==NULL)
			u->left=newnode();
			u=u->left;
		}
		else if(s[i]=='R')
		{
			if(u->right==NULL)
			u->right=newnode();
			u=u->right;
		}
	}
	if(u->flag) f=0;
	u->flag=true;
	u->val=v;
}

bool input()
{
	f=1;
	int v;
	while(1)
	{
		if(scanf("%s",str)!=1) return false;
		if(!strcmp(str,"()")) break;
		sscanf(&str[1],"%d",&v);
		addnode(v,strchr(str,',')+1);
	}
	return true;
}

void bfs()
{
	queue<node *> Q;
	Q.push(root);
	
	while(!Q.empty())
	{
		node *now=Q.front();
		Q.pop();
		if(now->flag==false)  f=0;
		res.push_back(now->val);
		if(now->left!=NULL) Q.push(now->left);
		if(now->right!=NULL) Q.push(now->right);	
	}	
}

void output()
{
	int l=res.size();
	for(int i=0;i<l;i++)
	cout<<res[i]<<" ";
	cout<<endl;
	res.clear();
}

int main()
{
	while(input())
	{
		bfs();
		if(f) output();	
		else  cout<<"not complete"<<endl;		
	}
	
	return 0;
}


