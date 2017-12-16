#include<iostream>
#include<cstring>
using namespace std;
int a[1000000];
int main()
{
	int n,i,j,len=1,t;
	memset(a,0,sizeof(a));
	a[0]=1;
	cin>>n;

	for(i=2;i<=n;i++)
	{
		t=0;
		for(j=0;j<len;j++)
		{
			a[j]=a[j]*i;
			a[j]+=t;
			t=a[j]/10;
			a[j]%=10;
		}
		while(t!=0)
		{
			a[j]=t%10;
			t/=10;
			j++;
		}
		len=j;
	}
	for(i=len-1;i>=0;i--)
	cout<<a[i];
	
	return 0;
 } 
