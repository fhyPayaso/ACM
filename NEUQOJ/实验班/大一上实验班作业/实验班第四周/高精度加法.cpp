#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int a[505],b[505],c[505],i;
	string str1,str2;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	cin>>str1>>str2;
	int l1=str1.size();
	int l2=str2.size();
	for(i=1;i<=l1;i++) a[i]=str1[l1-i]-'0';
	for(i=1;i<=l2;i++) b[i]=str2[l2-i]-'0';
	int l3=max(l1,l2);
	for(i=1;i<=l3;i++)
	{
		c[i]+=a[i]+b[i];
		if(c[i]>9)
		{
			c[i]-=10;
			c[i+1]++;
		}
	}
	if(c[l3+1]!=0) 
		cout<<c[l3+1];
	for(i=l3;i>0;i--) 
		cout<<c[i];
	return 0;
}
