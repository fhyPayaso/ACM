#include<iostream>
#include<cstring>
using namespace std;
int n,ti=1;
int flag[25],a[25],prime[50];

void init()
{
	memset(prime,0,sizeof(prime));
	prime[0]=1;prime[1]=1;
	for(int i=2;i<=50;i++)
	{
		if(prime[i]==0)
		{
			for(int j=i+i;j<=50;j+=i)
			prime[j]=1;
		}
		
	}
	
}


void dfs(int step)
{
	if(step==n+1&&!prime[a[step-1]+a[1]])
	{
		cout<<a[1];
		for(int i=2;i<=n;i++)
		cout<<" "<<a[i];
		cout<<endl;
		return ;
	}
	
	for(int i=2;i<=n;i++)
	{	
		if(flag[i]==0&&!prime[i+a[step-1]])
		{
			flag[i]=1;
			a[step]=i;
			dfs(step+1);
			flag[i]=0;
		}
	}
}

int main()
{
	
	init();
	while(cin>>n)
	{
		
		cout<<"Case "<<ti++<<":"<<endl;
		memset(flag,0,sizeof(flag));
		a[1]=1;flag[1]=1;
		dfs(2);
		cout<<endl;
	}
	return 0;
}
