#include<iostream>
using namespace std;
typedef long long ll;
const ll maxn=10000007;
int a[maxn];

void init()
{
	a[1]=1;
	a[2]=2;
	int flag=0,t=0;
	int i=2,j=i;
	while(j<maxn)
	{
		if(a[i]==1)
		{
			if(a[j-1]==1) a[j]=2;
			else          a[j]=1;
			j++;
		}
		else
		{
			if(a[j-1]==1) a[j]=2,a[j+1]=2;
			else          a[j]=1,a[j+1]=1;
			j+=2;
		}
		i++;
	}
}

int main()
{
	init();
	int ti,n;
	cin>>ti;
	
	while(ti--)
	{
		cin>>n;
		cout<<a[n]<<endl;	
	}
	return 0;
}
