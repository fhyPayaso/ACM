#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
const int maxn=100000+10;
int flag[maxn];
int main()
{
	
	int step,mod,ok=0;
	while(cin>>step>>mod)
	{
		memset(flag,0,sizeof(flag));
		int old=0,now=0,x=mod+10;
		flag[0]=1;
		while(x--)
		{
			now=(old+step)%mod;
			if(flag[now]) break;
			flag[now]=1;
			old=now;
		}
		int f=0;
		for(int i=0;i<mod;i++)
		{
			if(!flag[i])
			{
				f=1;
				break;
			}
		}
		
		cout<<setw(10)<<step<<setw(10)<<mod;
		if(!f) cout<<"    Good Choice"<<endl;
		else  cout<<"    Bad Choice"<<endl;
		cout<<endl;
	}
	return 0;
}
