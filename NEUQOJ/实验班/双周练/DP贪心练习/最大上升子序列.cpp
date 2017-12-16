#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int temp;
	char b[200];
	int a[100];
	while(gets(b))
	{
		int l=strlen(b);
		memset(a,0,sizeof(a));
		if(b[0]=='0')
		break;
		int i=1;
		for(int x=0;x<l;x++)
		{
			if(b[x]!=' ')
			{
				while(b[x]!=' ')
				{
					a[i]=a[i]*10;
					a[i]+=b[x]-'0';
					x++;
					if(x==l)
					break;
				}
				i++;
			}
		}
	
		int best[100];
		for(int j=1;j<i;j++) best[j]=1;
		
		for(int j=2;j<i;j++)
		{
			for(int k=1;k<j;k++)
			{
				if(a[k]<a[j])
				{
					if(best[j]<best[k]+1)
					best[j]=best[k]+1;
				}
			}
		}
		int max=0;
		for(int j=1;j<i;j++)
			if(best[j]>max)
				max=best[j];
		cout<<max<<endl;
	}
	return 0;
} 
