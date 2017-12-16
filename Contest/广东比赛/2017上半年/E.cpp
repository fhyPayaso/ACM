#include<iostream>
#include<cstring>
#include<queue>
#include<set>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<iomanip>

using namespace std;
const int MAXN=9999999;

int main()
{
	std::ios::sync_with_stdio(false);
	freopen("in.txt","r",stdin);
	
	
	int n,k,t,a[40]; 
	cin>>t;
	
	while(t--)
	{
		int sum,flag=0,num=0;
		memset(a,0,sizeof(a));
		cin>>n>>k;
		a[0]=n;
		int x=0;
		while(a[x])
		{
			a[x+1]=a[x]/2;
			a[x]%=2;
			x++;
		}
		sum=0;
		for(int i=0;i<=x;i++)
			sum+=a[i];
		if(sum<=k)
			flag=1;	

		while(flag==0)
		{
			a[0]++;
			num++;
			for(int i=0;i<=x;i++)
			{
				if(a[i]>1)
				{
					a[i+1]+=a[i]/2;
					a[i]%=2;
				}
			}
			
			sum=0;
			for(int i=0;i<=x;i++)
			sum+=a[i];
			if(sum<=k)
			flag=1;	
		}
		cout<<num<<endl;	
	}
	return 0;
 } 
 
 
