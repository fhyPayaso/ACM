#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
typedef long long ll;
const ll maxn=10000+10;
int lenth;
struct vec
{
	int to,val;
};

vector <vec > a[maxn]; 

void dfs(int step,int len)
{
	if(a[step].size()==0)
	{
		if(len>lenth)
		{
			lenth=len;
			return ;
		}
	}
	
	for(int i=0;i<a[step].size();i++)
	{
		vec temp=a[step][i];
		dfs(temp.to,len+temp.val);
	}
	
}


int main()
{
	int ti,n,m;
	cin>>ti;
	while(ti--)
	{
		cin>>n>>m;
		lenth=-1;
		for(int i=0;i<maxn;i++) a[i].clear();
		
		int f,t,v;
		vec temp;
		for(int i=0;i<m;i++)
		{
			cin>>t>>f>>v;
			temp.to=t;
			temp.val=v;
			a[f].push_back(temp);
		}
		
		dfs(n,0);
		cout<<lenth<<endl;
	}
	
	return 0;
}
