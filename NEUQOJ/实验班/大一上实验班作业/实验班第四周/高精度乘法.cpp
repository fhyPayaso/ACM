#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int a[505],b[505],c[1010],i,j;
	string str1,str2;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	cin>>str1>>str2;
	int l1=str1.size();
	int l2=str2.size();
	for(i=1;i<=l1;i++) a[i]=str1[l1-i]-'0';
	for(i=1;i<=l2;i++) b[i]=str2[l2-i]-'0';
	for(i=1;i<=l1;i++)
	{
		for(j=1;j<=l2;j++)
		{
			c[i+j-1]+=a[i]*b[j];
			if(c[i+j-1]>9)
			{
				c[i+j]+=c[i+j-1]/10;
				c[i+j-1]=c[i+j-1]%10;
			}
		}
	}
	int l3=l1+l2-1;
	while(c[l3+1]!=0) l3++;
	for(i=l3;i>0;i--) 
		cout<<c[i];
	return 0;
}
