#include<iostream>
using namespace std;
const int maxn=100000+5;
int num,t,temp,x,y,cur=1;
int xl,xr,yl,yr;
struct doublelink
{
	int left,right;
}node[maxn];

void one()
{
	if(xr==y)
	return ;
					
	node[xl].right=xr;
	node[xr].left=xl;
					
	node[x].left=node[y].left;
	node[yl].right=x;
					
	node[y].left=x;
	node[x].right=y;
}
void two()
{
	if(yr==x)
	return ;
					
	node[xl].right=xr;
	node[xr].left=xl;
					
	node[x].right=node[y].right;
	node[yr].left=x;
					
	node[y].right=x;
	node[x].left=y;	
}
void three()
{
	if(xr==y)
	{
		node[xl].right=y;
		node[yr].left=x;
		
		node[x].left=y;
		node[x].right=yr;
		
		node[y].right=x;
		node[y].left=xl;
		
	}
	else if(xl==y)
	{
		node[yl].right=x;
		node[xr].left=y;
		
		node[x].left=yl;
		node[x].right=y;
		
		node[y].left=x;
		node[y].right=xr;
		
	}
	else
	{
		node[xl].right=y;
		node[xr].left=y;
		node[y].right=xr;
		node[y].left=xl;
									
		node[yr].left=x;
		node[yl].right=x;
		node[x].left=yl;
		node[x].right=yr;
	}
}

int main()
{
	
	while(cin>>num>>t)
	{
		for(int i=0;i<=num+1;i++)
		{
			node[i].left=i-1;
			node[i].right=i+1;
		}
		int flag=0;
		while(t--)
		{
			cin>>temp;
			if(temp==4)
				flag=1-flag;
			else
			{
				cin>>x>>y;
				xl=node[x].left,xr=node[x].right;
				yl=node[y].left,yr=node[y].right;
				
				if(temp==1)
					if(flag==0) one();
					else        two();	
				else if(temp==2)
					if(flag==1)  one();
					else      	 two();
				else if(temp==3)
							three();
			}

		}
		int now=node[0].right,next;
		unsigned long long odd=0;
		for(int i=1;i<=num;i++) 
		{
			if(i%2) odd+=now;
			now=node[now].right;
		}
		if(num%2==0&&flag==1)
			odd=(long long)num*(num+1)/2-odd;
		cout<<"Case "<<cur++<<": "<<odd<<endl;
	}
	return 0;
}
