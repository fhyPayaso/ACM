#include<iostream>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	int m,n;
	int a[105][105];
	int b[105];
	while(cin>>m>>n) 
	{
		for(int i=1;i<=n;i++) b[i]=0;
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
				if(a[i][j]==1)
				b[j]++;
			}
		}
		for(int i=1;i<n;i++)
		cout<<b[i]<<" ";
		cout<<b[n]<<endl;	
	}
	
	return 0;
 } 
 

 
