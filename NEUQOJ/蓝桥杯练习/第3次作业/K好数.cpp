#include<iostream>
using namespace std;
int main()
{
	int k,l,i,j,s;
	const unsigned long long mod=1000000007;
	unsigned long long time[105][105];	
	unsigned long long all_time=0;
	cin>>k>>l;
	for(i=0;i<k;i++) time[1][i]=1;
	
	for(i=2;i<=l;i++)
	{
		for(j=0;j<k;j++)
		{
			for(s=0;s<k;s++)
			{
				if(s!=j-1&&s!=j+1)
				{
					time[i][j]+=time[i-1][s];
					time[i][j]%=mod;
				}
			}
		}	
	}
	for(i=1;i<k;i++)
	{
		all_time+=time[l][i];
		all_time%=mod;
	}
	cout<<all_time;
	return 0;
}

