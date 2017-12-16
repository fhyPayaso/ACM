#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[10000];
	int i,j;
	while(gets(a))
	{
		j=0;
		for(i=0;i<strlen(a)-1;i++)
		{
			if(a[i]==' ')
			{
				
				for(int k=i-1;k>=j;k--)
				cout<<a[k];
				cout<<" ";
				j=i+1;
			}
		}
		for(int k=strlen(a)-1;k>=j;k--)
		cout<<a[k];
		cout<<endl;
		memset(a,'0',sizeof(a));
	}
	return 0;
}
