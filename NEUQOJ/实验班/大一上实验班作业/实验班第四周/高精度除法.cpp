#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[505],b[505];
int l1,l2,i,t=0;
int main()
{
	int judge();
	string str1,str2;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	cin>>str1>>str2;
	l1=str1.size();
	l2=str2.size();
	for(i=1;i<=l1;i++) a[i]=str1[l1-i]-'0';
	for(i=1;i<=l2;i++) b[i]=str2[l2-i]-'0';
	while(judge()==1)
	{
		t++;
		for(i=1;i<=l1;i++)
		{
			a[i]-=b[i];
			if(a[i]<0)
			{
				a[i]+=10;
				a[i+1]--;
			}	
		}
		while(a[l1]==0&&l1>1) l1--;
	}
	cout<<t;
	return 0;
}
int judge()
{
	if(l1>l2)return 1;
	if(l1<l2)return -1;
	for(i=l1;i>0;i--)
	{
		if(a[i]>b[i])return 1;
		if(a[i]<b[i])return -1;	
	}
	return 1;
}


