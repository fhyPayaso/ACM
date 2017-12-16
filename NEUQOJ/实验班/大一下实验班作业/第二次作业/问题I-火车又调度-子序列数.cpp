#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,i,j,temp,k=1;
	int a[100005],len[100005];
	memset(len,0,sizeof(len));
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	
	for(i=1;i<=n;i++)
	{
		len[i]=1;
		for(j=1;j<=i;j++)
		{
			if(a[i]>a[j])
			{
				int lm=len[j]+1;
				if(lm>len[i])
				len[i]=lm;
			}
		}
	}
	
	int max=len[1];
	for(i=2;i<=n;i++)
	{
		if(max<len[i])
		max=len[i];
	}
	
	cout<<max;
	
	return 0;
}
