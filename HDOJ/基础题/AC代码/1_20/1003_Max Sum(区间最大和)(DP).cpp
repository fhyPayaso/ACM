#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int maxn=100000+10;
struct no
{
	int val;
	int l,r;
}sum[100010];
int main()
{
	int t,ok=0;
	cin>>t;
	for(int ti=1;ti<=t;ti++)
	{
		int n,m=-2000,left,right;
		cin>>n;
		
		for(int i=1;i<=n;i++)
		{
			
			int temp;
			cin>>temp;
			
			if(i==1)
			{
				sum[i].val=temp;
				sum[i].l=i;
				sum[i].r=i;
			}
			else
			{
				if(sum[i-1].val+temp>=temp)
				{
					sum[i].val=sum[i-1].val+temp;
					sum[i].l=sum[i-1].l;
					sum[i].r=i;
					
				}
				else
				{
					sum[i].val=temp;
					sum[i].l=i;
					sum[i].r=i;
				}
			}
			
			if(sum[i].val>m)
			{
				m=sum[i].val;
				right=sum[i].r;
				left=sum[i].l;
			}	
		}
		if(!ok) ok=1;
		else cout<<endl;
		cout<<"Case "<<ti<<":"<<endl;
		cout<<m<<" "<<left<<" "<<right<<endl;
	}
	
	
	return 0;
}
