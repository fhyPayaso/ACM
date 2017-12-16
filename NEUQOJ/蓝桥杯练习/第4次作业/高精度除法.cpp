#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	string s1,s2,temp;
	int a[505],b[505],c[505],i,j,t=0,flag=1;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(a));
	cin>>s1>>s2;
	
	if(s1.length()<s2.length()||(s1.length()==s2.length()&&s1<s2))
	{
		temp=s1;
		s1=s2;
		s2=temp;
	}
	
	a[0]=s1.length();
	b[0]=s2.length();
	for(i=1;i<=a[0];i++) a[i]=s1[a[0]-i]-'0';
	for(i=1;i<=b[0];i++) b[i]=s2[b[0]-i]-'0';
	
	while(flag)
	{
		for(i=1;i<=a[0];i++)
		{
			a[i]-=b[i];
			if(a[i]<0)
			{
				a[i+1]--;
				a[i]+=10;
			}
		}
		t++;
		while(a[a[0]]==0&&a[0]>1) a[0]--;
		
		if(a[0]<b[0]) flag=0;
		else if(a[0]==b[0])
		{
			for(j=a[0];j>0;j--)
			{
				if(a[j]<b[j])
				{
					flag=0;
					break;
				}
			}
			
		}
	}
	cout<<t;	
	return 0;
 } 
