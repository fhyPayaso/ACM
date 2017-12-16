#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[10005],b[10005];
	gets(a);
	gets(b);
	int l1,l2;
	l1=strlen(a);
	l2=strlen(b);
	
	for(int i=0;i<l1;i++)
	{
		int flag=0;
		for(int j=0;j<l2;j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<a[i];
	}
	return 0;
 } 
