#include<iostream>
#include<cstring>
using namespace std;
int n,k,sum,put[10];
char map[10][10];

void dfs(int step,int num)
{
	if(num==0)
	{
		sum++;
		return ;		
	}
	if(num>step)
	return ; 
	
	dfs(step-1,num);
	for(int i=1;i<=n;i++)
	{
		if(map[step][i]=='#'&&put[i]==0)
		{
			put[i]=1;
			dfs(step-1,num-1);	
			put[i]=0;				
		}
	}
}

int main()
{
	while(cin>>n>>k)
	{
		if(n==-1&&k==-1)
		break;
		
		memset(map,'.',sizeof(map));
		memset(put,0,sizeof(put));
		sum=0;

		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				cin>>map[i][j];
						
		dfs(n,k);		
		cout<<sum<<endl;
	}
	
	return 0;
}
