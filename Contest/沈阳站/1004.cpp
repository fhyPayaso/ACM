#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=50000+10;
int a[maxn],up[maxn],down[maxn];
int main()
{
	int ti,n,k;
	cin>>ti;
	while(ti--)
	{
		cin>>n>>k;

		for(int i=1;i<=n;i++)
			up[i]=down[i]=1;

		for(int i=1;i<=n;i++) cin>>a[i];
		int maxup=1,maxdown=1,maxall=1;
		
		for(int i=2;i<=n;i++)
		{
			
			for(int j=1;j<i;j++)
			{
				if(a[i]>a[j]&&up[i]<up[j]+1)
					up[i]=max(up[i],up[j]+1);
				
				if(a[i]<a[j]&&down[i]<down[j]+1)
					down[i]=max(down[i],down[j]+1);	
			}
			maxup=max(maxup,up[i]);
			maxdown=max(maxdown,down[i]);
			maxall=max(maxup,maxdown);
		}	
		if(maxall+k<n)
			cout<<"A is not a magic array."<<endl;
		else
			cout<<"A is a magic array."<<endl;
		
	}
	
	return 0;
}
