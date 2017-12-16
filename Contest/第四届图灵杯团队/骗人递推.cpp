#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string s[1000];
int j=3;
struct bign
{
	int len;
	int d[1000];
	bign()
	{
		memset(d,0,sizeof(d));
		len=0;
	}
};
bign change(string str)//将整数化成bign
{
	bign a;
	a.len=str.size();
	for(int i=0; i<a.len; i++)
	{
		a.d[i]=str[a.len-i-1]-'0';
	}
	return a;
}
bign add(bign a,bign b)
{
	bign c;
	int carry=0;//carry 是进位
	for(int i=0; i<a.len||i<b.len; i++)
	{
		int temp=a.d[i]+b.d[i]+carry;
		c.d[c.len++]=temp%10;
		carry=temp/10;
	}
	if(carry!=0)
	c.d[c.len++]=carry;
	return c;
}
void change1(bign a)
{
	string s1;
	for(int i=a.len-1;i>=0;i--)
	{
		s1=s1+(char)(a.d[i]+'0');
	}
	s[j++]=s1;
} 
int main()
{
	freopen("C.in","r",stdin);
	string s1,s2;
	char s3[]="1",s4[]="2";
	bign a=change(s3);
	bign b=change(s4);
	bign c;
	s[1]="1";s[2]="2";
	while(c.len<=101)
	{
		c=add(a,b);
		change1(c);
		a=b;
		b=c;
	}
	//for(int i=1;i<j;i++)
//	cout<<s[i]<<" "<<i<<endl;
	while(1)
	{
		cin>>s1>>s2;
		if(s1[0]=='0'&&s2[0]=='0')
		break;
		int b1,b2;
		for(int i=1;i<j;i++)
		{
			if(s[i].size()>s1.size())
			{
				b1=i;break;
			}
			else if(s[i].size()==s1.size()&&s[i]>=s1)
			{
				b1=i;break;
			}	
		}
		for(int i=j-1;i>1;i--)
		{
			if(s[i].size()<s2.size())
			{
				b2=i;break;
			}
			else if(s[i].size()==s2.size()&&s[i]<=s2)
			{
				b2=i;break;
			}
		}
		cout<<b2-b1+1<<endl;
	}
	return 0;
}

