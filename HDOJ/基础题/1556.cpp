#include<iostream>
using namespace std;
typedef long long ll;
const ll maxn=100000+10;
int tree[maxn*4];

void build(int left,int right,int root)
{
	if(left==right) 
	{
		tree[root]=0;
		return ;
	}
	
	int mid=(left+right)/2;
	
	build(left,mid,root*2);
	build(mid+1,right,root+1);
}

void updata(int left,int right,int root,int x,int y)
{
	if(left==right&&left<=x&&right<=y)
	{
		tree[root]++;
		return ;
	 } 
	
	int mid=(left+right)/2;
	updata(left,mid,root*2,x,y);
	updata(mid+1,right,root*2+1,x,y);
}

void print(int left,int right,int root)
{
	if(left==right)
	{
		cout<<tree[root]<<" ";
		return ;
	 } 
	
	int mid=(left+right)/2;
	print(left,mid,root*2);
	print(mid+1,right,root*2+1);
}


int main()
{
	//freopen("in.txt","r",stdin);
	
	int n;
	
	while(cin>>n)
	{
		if(!n) break;
		
		build(1,n,1);
		
		int x,y;
		for(int i=1;i<=n;i++)
		{
			cin>>x>>y;
			updata(1,n,1,x,y);
		}
		print(1,n,1);
		cout<<endl;
		
	}
	
	
	return 0;
}  
