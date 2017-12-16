#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=1000+5;
int c[maxn],w[maxn],f[maxn];
int main()
{
	int val,num;
	while(cin>>val>>num)
	{
		memset(f,0,sizeof(f));
		for(int i=1;i<=num;i++)
		cin>>c[i]>>w[i];
		for(int i=1;i<=num;i++)
		{
			int k=val/c[i];
			for(int j=1;j<=k;j++)
			{
				for(int v=val;v>=c[i];v--)
					f[v]=max(f[v-c[i]]+w[i],f[v]);
			} 	
		}	
		cout<<f[val]<<endl;		
	}
	return 0;
} 
