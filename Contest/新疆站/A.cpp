#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector <int > a[60];
set <int > pl[60];
int main()
{
	int ti,n,m;
	cin>>ti;
	
	while(ti--)
	{
		for(int i=0;i<60;i++) 
		{
			a[i].clear();
			pl[i].clear();
		}
		
		
		cin>>n>>m;
		int x,y,p;
		
		for(int i=1;i<=n;i++)
		{
			cin>>x>>y;
			a[x].push_back(y);
		}
		
		for(int i=1;i<=m;i++)
		{
			cin>>y>>p;
			pl[p].insert(y); 
		}
		
		
		for(int i=1;!a[i].empty();i++)
			for(int j=0;j<a[i].size();j++)
				for(int k=1;!pl[k].empty();k++)
					if(pl[k].find(a[i][j])!=pl[k].end())
					cout<<i<<" "<<k<<endl;
	}
	
	
	return 0;
}
