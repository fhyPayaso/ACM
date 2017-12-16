#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[85];
	while(gets(s))
	{
		int l=strlen(s);
		for(int i=0;i<l;i++)
		{
			if(s[i]!=' ')
			cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
 } 
