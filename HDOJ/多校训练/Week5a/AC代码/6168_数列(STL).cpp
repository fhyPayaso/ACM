#include<iostream>
#include<map>
#include<vector>
using namespace std;
typedef long long ll;

map < ll,int > M;
vector <ll> ans;

int main()
{
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	int m;
	while(cin>>m)
	{
		std::map<ll ,int >::iterator it;
		M.clear();
		ans.clear();
		
		
		ll temp;
		for(int i=1;i<=m;i++)
		{
			cin>>temp;
			
			it=M.find(temp);
			if(it!=M.end())	M[temp]++; 
			else			M[temp]=1;
		}
		
		
		it=M.begin();
		temp=(*it).first;
		M[temp]--;
		ans.push_back(temp);
		
		
		for(it=M.begin();it!=M.end();it++)
		{
			temp=(*it).first;
			
			while(M[temp]>0)
			{
				
				for(int i=0;i<ans.size();i++)
				{
					ll t=temp+ans[i];
					
					std::map<ll ,int >::iterator itor;
					itor=M.find(t);
					if(itor!=M.end()&&M[t]>0) M[t]--;
				}
				ans.push_back(temp);
				M[temp]--;
			}
		}
		
		int len=ans.size();
		cout<<len<<endl;
		for(int i=0;i<len-1;i++)
		cout<<ans[i]<<" ";
		cout<<ans[len-1]<<endl;
	}
	
	return 0;
}
