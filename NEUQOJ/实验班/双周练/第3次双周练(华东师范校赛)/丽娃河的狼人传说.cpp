#include<iostream>
#include<cstring>
using namespace std;

struct ne
{
	int left;
	int right;
	int need;
};

int main()
{
	int t;
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		int n,m,k,sum=0,temp;
		cin>>n>>m>>k;
		
		int old[1005];
		ne lim[1005];
		memset(old,0,sizeof(old));
		
		for(int y=1;y<=k;y++)
		{
			cin>>temp;
			old[temp]=1;
		}
		
		for(int y=1;y<=m;y++)
		cin>>lim[y].left>>lim[y].right>>lim[y].need;
		
		int xum=0;
		for(int y=1;y<=m;y++)
		{
			int x=0,t=0;
			
			for(int i=lim[y].left;i<=lim[y].right;i++)
			{
				if(old[i])
					x+=old[i];
				else
					t++;	
			}
			if(t<lim[y].need-x)
			{
				sum=-1;
				break;
			}
			else
				sum+=(lim[y].need-x);
			
			int cont=0;	
			for(int i=lim[y].left;i<=lim[y].right;i++)
			{
				if(old[i]==0)
				old[i]=1;
				cont++;
				if(cont==lim[y].need)
				break;		
			}		
		}

		cout<<"Case "<<x<<": "<<sum<<endl;
	}
	return 0;
}

