#include<iostream>
#include<algorithm>
using namespace std;

struct nn
{
	long long val;
	int id;
}a[100010];

bool cmp(const nn &a,const nn &b)
{
	return a.val > b.val;
}


int main()
{
	
	//freopen("in.txt","r",stdin);
	int ti,n;
	cin>>ti;
	
	while(ti--)
	{
		cin>>n;
		
		for(int i=1;i<=n;i++)
		{
			cin>>a[i].val;
			a[i].id=i;
		}
		
		sort(a+1,a+n+1,cmp);
		
//		for(int i=1;i<=n;i++)
//		{
//			cout<<a[i].val<<" "<<a[i].id<<endl;
//			
//		}
		
		for(int j=1;j<=n;j++)
		{
			if(a[j].id%2!=0)
			{
				cout<<a[j].val;
				break;
			}
		}
		
		for(int i=3;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[j].id%i!=0)
				{
					cout<<" "<<a[j].val;
					break;
				}
			}
		}
		cout<<endl;
	}
	
	return 0;
}
