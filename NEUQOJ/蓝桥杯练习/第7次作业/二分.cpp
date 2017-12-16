#include<iostream>
using namespace std;
int a[100005],b[100005];
int er(int len,int p)
{
	int l,r,mid;
	l=1;r=len;mid=(l+r)/2;
	while(l<=r)
	{
		if(p>b[mid])  l=mid+1;
		else if(p<b[mid]) r=mid-1;
		else return mid;
		mid=(l+r)/2;
	}
	return l;
}
int main()
{
	int n,i,j,k,len;
	while(cin>>n)
	{
		for(i=0;i<n;i++)
		cin>>a[i];
		
		len=1;
		b[1]=a[0];
		for(k=1;k<n;k++)
		{
			j=er(len,a[k]);
			b[j]=a[k];
			if(j>=len)
			len=j;
		}
		cout<<len<<endl;
	}
	return 0;
 } 
