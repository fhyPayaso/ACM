#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int a[510],b[510],c[1100],i,j;
	string s1,s2;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	
	cin>>s1>>s2;
	int l1=s1.length();
	int l2=s2.length();
	for(i=1;i<=l1;i++) a[i]=s1[l1-i]-'0';
	for(i=1;i<=l2;i++) b[i]=s2[l2-i]-'0';
	
	for(i=1;i<=l1;i++)
	{
		for(j=1;j<=l2;j++)
		{
			c[j+i-1]+=a[i]*b[j];
			if(c[j+i-1]>9)
			{
				c[j+i]+=c[j+i-1]/10;
				c[j+i-1]%=10;
			}	
		}
	}
	l1+=l2-1;
	while(c[l1+1]!=0) l1++;
	for(i=l1;i>0;i--) cout<<c[i];
	return 0;
} 
