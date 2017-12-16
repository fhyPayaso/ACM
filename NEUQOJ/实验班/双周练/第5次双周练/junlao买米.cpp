#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=1000+5;
int c[maxn],w[maxn],n[maxn],res[maxn];
int main()
{
	int t,val,tim;
	cin>>t;
	while(t--)
	{
		cin>>val>>tim;
		memset(res,0,sizeof(res));
		for(int i=1;i<=tim;i++)
		cin>>c[i]>>w[i]>>n[i];
		
		for(int i=1;i<=tim;i++)
		{
			int temp=min(val/c[i],n[i]);
			for(int k=1;k<=temp;k++)
			{
				for(int v=val;v>=c[i];v--)
				res[v]=max(res[v-c[i]]+w[i],res[v]);
			}	
		}
		cout<<res[val]<<endl;	
	}
	
	return 0;
 } 
