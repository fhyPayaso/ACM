#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
	char a[100000];
		while(gets(a))
		{
			int l=strlen(a);
			for(char j=97;j<=122;j++)
			{
				int x=0;
				for(int i=0;i<l;i++)
				{
					if(a[i]==j)
					x++;
				}
				cout<<j<<":"<<x<<endl;
			}
			cout<<endl;	
		} 
	return 0;
} 
