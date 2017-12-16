#include<iostream>
#include<cstring>
using namespace std;
bool a[3010][3010];
int main()
{
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	int ti,n;
	cin>>ti;
	while(ti--)
	{
		cin>>n;
		memset(a,false,sizeof(a));
		int temp;
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++)
			{
				cin>>temp;
				if(temp) a[i][j]=true;
			}
		
		
		int f=1;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{	
				for(int k=j+1;k<=n;k++)
				{
					if(a[i][j]&&a[i][k]&&a[j][k])	{	f=0;break;	} 
					else if(!a[i][j]&&!a[i][k]&&!a[j][k])  {	f=0;break;	} 	
				}
				if(!f) break;
			}
			if(!f) break;
		}
		
		if(f) cout<<"Great Team!"<<endl;
		else  cout<<"Bad Team!"<<endl;
		
	}
	
	return 0;
}
