#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	
	char a[1005],b[1005];
	int  x[1005],y[1005],z[1005],i,n;	
	cin>>n;
	for(int j=0;j<n;j++)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		memset(z,0,sizeof(z));
		cin>>a>>b;
		
		int l1=strlen(a);
		int l2=strlen(b);
		
		for(i=0;i<l1;i++)  x[i]=a[l1-i-1]-'0';
		for(i=0;i<l2;i++)  y[i]=b[l2-i-1]-'0';
		
		int l=max(l1,l2);
		for(i=0;i<l;i++)
		{
			z[i]+=x[i]+y[i];
			if(z[i]>9)
			{
				z[i]-=10;
				z[i+1]=z[i+1]+1;
			}
		}
		if(z[l]!=0)  l++;
		cout<<"Case "<<j+1<<":"<<endl<<a<<" + "<<b<<" = ";
		for(int i=l-1;i>=0;i--)
		cout<<z[i];
		cout<<endl;
	}
	return 0;
} 
