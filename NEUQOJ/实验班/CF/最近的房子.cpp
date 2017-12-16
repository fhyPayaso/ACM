#include<iostream>
using namespace std;
int main()
{
	int m,n,k;
	int a[105];
	cin>>n>>m>>k;
	
	for(int i=1;i<=n;i++)
	cin>>a[i];
	a[0]=-1;a[n+1]=-1; 
	int s1=0,s2=0;
	int flag1=0,flag2=0;
	if(m==1)
		flag2=1;
	else if(m==n)
		flag1=1;
	for(int i=m+1;i<=n;i++)
	{
		if(i==n&&(a[i]==0||a[i]>k))
			flag1=1;
		if(a[i]==0)
			s1+=10;
		else if(a[i]>k)
			s1+=10;
		else
		{
			s1+=10;
			break;
		}	
	}
	for(int i=m-1;i>=1;i--)
	{
		if(i==1&&(a[i]==0||a[i]>k))
			flag2=1;
		if(a[i]==0)
			s2+=10;
		else if(a[i]>k)
			s2+=10;
		else
		{
			s2+=10;
			break;
		}	
	}
	
	if(flag1==1)
		cout<<s2<<endl;
	else if(flag2==1)
		cout<<s1<<endl;
	else if(s1>s2)
		cout<<s2<<endl;
	else 
		cout<<s1<<endl;
	
	return 0;
 } 
