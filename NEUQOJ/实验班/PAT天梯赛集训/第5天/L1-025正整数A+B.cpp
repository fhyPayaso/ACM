#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	char s[100];
	string s1,s2;
	int i,sum1=0,sum2=0,flag1=0,flag2=0;
	gets(s);
	int l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]!=' ')
		s1+=s[i];
		else
		break;
	}
	i++;
	for(;i<l;i++)
	s2+=s[i];
	for(int i=0;i<s1.length();i++)
	{
		if('0'<=s1[i]&&s1[i]<='9')
		{
			sum1=sum1*10+(s1[i]-'0');
		}
		else
		{
			flag1=1;
			break;
		}
	}
	
	for(int i=0;i<s2.length();i++)
	{
		if('0'<=s2[i]&&s2[i]<='9')
		{
			sum2=sum2*10+(s2[i]-'0');
		}
		else
		{
			flag2=1;
			break;
		}
	}
	
	if(flag1==1) cout<<"?";
	else cout<<sum1;
	cout<<" + ";
	if(flag2==1) cout<<"?";
	else cout<<sum2;
	cout<<" = ";
	if(flag1==1||flag2==1)
	cout<<"?";
	else cout<<sum1+sum2;
	return 0;
}
