#include<iostream>
#include<cstring>
using namespace std;
struct stu
{
	int old;
	int want;
} st[500005];
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		break;
		
		
		for(int i=1;i<=n;i++)
		cin>>st[i].old>>st[i].want;
		int flag[n+5];
		memset(flag,0,sizeof(flag));
		for(int i=1;i<=n;i++)
		{
			if(flag[i]!=1)
			{
				for(int j=i+1;j<=n;j++)
				{
					if(st[i].old==st[j].want&&st[i].want==st[j].old)
					{
						flag[i]=1;
						flag[j]=1;
						break;
					}	
				}
			}
		}
		int x=0;
		for(int i=1;i<=n;i++)
			if(flag[i]==0)
				x=1;
		if(x==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;			
	}
	return 0;
}
