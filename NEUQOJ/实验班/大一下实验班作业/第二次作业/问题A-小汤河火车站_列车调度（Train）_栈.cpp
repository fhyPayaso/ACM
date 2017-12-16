#include<iostream>
using namespace std;
int main()
{
	int stack[100005],x[100005],out[100005];
	int i,j,n,m,stop=0,flag=0;
	
	cin>>n>>m;
	for(i=1;i<=n;i++)
	cin>>out[i];
	
	j=0;
	for(i=1;i<=n;i++)
	{
		if(out[i]<stack[stop])
		{
			flag=1;
			break;
		}
		
		if(j<out[i])
		{
			while(j!=out[i])
			{
				stack[++stop]=++j;
			}
		}
		
		if(stop>m)
		{
			flag=1;
			break;
		}
		
		if(stack[stop]==out[i])
			stop--;
	}
	
	if(flag==1)
	cout<<"震惊！昨天小汤河火车站竟然。。。"<<endl;
	else
	{
		j=0,stop=0;
		for(i=1;i<=n;i++)
		{	
			if(j<out[i])
			{
				while(j!=out[i])
				{
					j++;
					stop++;
					x[stop]=j;
					cout<<"push"<<endl;
				}
			}
			
			if(x[stop]==out[i])
			{
				stop--;
				cout<<"pop"<<endl;
			}
		}
	}
	
	return 0;
}
