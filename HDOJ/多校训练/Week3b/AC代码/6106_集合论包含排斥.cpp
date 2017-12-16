#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	//freopen("in.txt","r",stdin);
	int ti,n,a[8];
	cin>>ti;
	while(ti--)
	{
		cin>>n;
		int maxn=-1;
		for(int i=1;i<=n;i++)
		{
			
			for(int j=1;j<=7;j++) cin>>a[j];
			
			int ab=a[4]-a[7],bc=a[5]-a[7],ac=a[6]-a[7];
			int aa=a[1]-ab-ac-a[7],bb=a[2]-ab-bc-a[7],cc=a[3]-bc-ac-a[7];
			
			if(ab<0||bc<0||ac<0||aa<0||bb<0||cc<0) continue;
			
			
			int temp=a[1]+a[2]+a[3]-a[4]-a[5]-a[6]+a[7];
			if(temp<0) continue;
			maxn=max(maxn,temp);
			
		}
		cout<<maxn<<endl;
	}
	
	return 0;
}
