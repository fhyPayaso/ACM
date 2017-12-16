#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;
int n,l,flag[15],f;
string str;
char a[15],res[15];


void dfs(int step)
{
	if(step==5)
	{
		long long temp=0; 
		temp=pow(a[0]-'A'+1,1)-pow(a[1]-'A'+1,2)+pow(a[2]-'A'+1,3)-pow(a[3]-'A'+1,4)+pow(a[4]-'A'+1,5);
		if(temp==n&&strcmp(a,res)>0) 
		{
			strcpy(res,a);
			f=1;
			
		}
		return ;
	}
	
	for(int i=0;i<l;i++)
	{
		if(flag[i]==0)
		{
			flag[i]=1;
			a[step]=str[i];
			dfs(step+1);
			flag[i]=0;
		}	
		
	}
}

int main()
{
	//freopen("in.txt","r",stdin);
	while(cin>>n>>str)
	{
		if(n==0&&str=="END") break;
		memset(flag,0,sizeof(flag));
		l=str.size();
		f=0;
		for(int i=0;i<5;i++) res[i]='A';
		dfs(0);
		if(f==0) 
		{
			cout<<"no solution"<<endl;
			continue;
		}
		for(int i=0;i<5;i++)
		cout<<res[i];
		
		cout<<endl;
	}
	
	return 0;
}
