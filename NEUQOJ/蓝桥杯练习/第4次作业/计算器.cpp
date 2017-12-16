#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int f,i,a,b,x=0;
	char s[1000];
	gets(s);
	int l=strlen(s);
	for(i=0;i<l;i++)
	{
		if('0'<=s[i]&&s[i]<='9')
			x++;	
		else if(s[i]=='+'||s[i]=='-'||s[i]=='*')
			break;
		else if(s[i]==' ')
		continue;	
	}
	
	if(x==1) a=s[0]-'0';
	else if (x==2) a=s[0]*10+s[1];
	else a=100;
	
	int yun=i;
	
	x=0;
	for(;i<l;i++)
	{
		if('0'<=s[i]&&s[i]<='9')
		{
			x++;
			f=i;	
		}
		else
		continue;
	}
	if(x==1) b=s[f]-'0';
	else if (x==2) b=s[f-1]*10+s[f];
	else b=100;
	
	if(s[yun]=='+') cout<<a+b;
	else if(s[yun]=='-') cout<<a-b;
	else cout<<a*b;
	
	return 0;
}
