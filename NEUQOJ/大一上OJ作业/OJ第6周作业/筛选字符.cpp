#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[10000];
	while(gets(a))
	{
		int l=strlen(a);
		for(int i=0; i<l; i++)
		{
			if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)||a[i]==' ')
			cout<<a[i];	
		}
		cout<<endl;
		memset(a,0,sizeof(a));
	}
	return 0;
}
