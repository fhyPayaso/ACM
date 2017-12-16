#include<iostream>
using namespace std;
const int maxn=100000+5;
struct qj
{
	int str,end;
};
qj t[maxn];
int res[maxn];
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>t[i].str>>t[i].end;
			res[i]=1;	
		}
		
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j<i;j++)
			{
				if(t[i].str>t[j].end)
				{
					if(res[i]<res[j]+1)
					res[i]=res[j]+1;
				}
			}
		}
		int m=0;
		for(int i=1;i<=n;i++)
			if(res[i]>m)
				m=res[i];
		cout<<m<<endl;
	}
	return 0;
 } 
