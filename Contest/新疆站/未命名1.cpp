#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
const ll maxn=2000;
ll d[maxn],c[maxn];
int main()
{
	
	int ti,n,b;
	cin>>ti;
	while(ti--)
	{
		
		memset(d,0,sizeof(d));
		memset(c,0,sizeof(c));
		
		cin>>n>>b;
		for(int i=1;i<=n;i++) cin>>c[i];
		for(int i=1;i<n;i++)  cin>>d[i];
		ll num=0;
		int flag=0;
		for(int i=1;i<n;i++)
		{
			num+=c[i];
			ll sum=d[i]*b;
			
			num-=sum;
			
			if(num<0)
			{
				flag=1;
				break;
			}
		}	
		if(flag==1) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;	
	}
	return 0;
 } 
