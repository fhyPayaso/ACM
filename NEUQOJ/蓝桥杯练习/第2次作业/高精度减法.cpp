#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int a[505],b[505],c[505],i;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	string s1,s2;
	cin>>s1>>s2;
	
	if(s1.length()<s2.length()||(s1.length()==s2.length()&&s1<s2))
	{
		string temp;
		temp=s1;
		s1=s2;
		s2=temp;
		cout<<"-";
	}
	
	int l1=s1.length(),l2=s2.length();
	for(i=0;i<l1;i++)
	a[i]=s1[l1-i-1]-'0';
	for(i=0;i<l2;i++)
	b[i]=s2[l2-i-1]-'0';
	
	for(i=0;i<l1;i++)
	{
		c[i]+=a[i]-b[i];
		if(c[i]<0) 
		{
			c[i]+=10;
			c[i+1]--;
		}
	}
	while(c[l1-1]==0&&l1>1) l1--;
	while(l1--) cout<<c[l1];
	return 0;
} 
