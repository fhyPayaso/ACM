#include<iostream>
#include<vector>
using namespace std;
vector<int>a[505]; 
int size[510],flag;

void dfs(int node)
{
	size[node]=1;
	int num=0;
	for(int i=0;i<a[node].size();i++)
	{
		int to=a[node][i];
		dfs(to);
		size[node]+=size[to];
		if(size[to]%2==1) num++;
	}
	if(num>=2)
	flag=1;
}

int main()
{
	//freopen("in.txt","r",stdin);
	int ti,n,k;
	cin>>ti;
	while(ti--)
	{
		cin>>n>>k;
		
		for(int i=1;i<=n;i++)
		{
			a[i].clear();
			size[i]=0;
		}
		
		for(int i=2;i<=n;i++)
		{
			int far;
			cin>>far;
			a[far].push_back(i);
		}
		flag=0;
		dfs(1);
		
		if(n%2==1 || flag || n/2-1>k ) cout<<"Alice"<<endl;
		else cout<<"Bob"<<endl;
		
		
	}
	return 0;
}
