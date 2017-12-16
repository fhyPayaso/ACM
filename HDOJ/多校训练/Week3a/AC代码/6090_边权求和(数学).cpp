#include<iostream>
using namespace std;
int main()
{
	//freopen("in.txt","r",stdin);
	long long  ti,n,m;
	cin>>ti;
	
	while(ti--)
	{
		cin>>n>>m;
		long long res=0,temp;
		if(m<n-1)
		{
			temp=n-1-m;
			res+=2*m;
			res+=(m-1)*2*m;
			res+=(temp-1)*n*temp;
			res+=(m+1)*temp*n*2;
		}
		else if(m>=n-1&&m<n*(n-1)/2)
		{
			temp=m-(n-1);
			res+=(2*(n-1)+(n-2)*2*(n-1));
			res-=temp*2;
		}
		else
		{
			res=n*(n-1);
		}
		cout<<res<<endl;
	}
	
	return 0;
} 

