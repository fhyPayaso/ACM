#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		char a[1001]={0},b[1001]={0};
		int t1[1001]={0},t2[1001]={0},x=0;
		cin>>a>>b;
		int n1=strlen(a);
		int n2=strlen(b);
		int l=(n1>=n2)?n1:n2;
		cout<<"Case "<<j+1<<":"<<endl;
		cout<<a<<" + "<<b<<" = ";
		for(int k=n1-1;k>=0;k--)
		{
			t1[x]=a[k]-'0';
			x++;
		}
		j=0;
		for(int k=n2-1;k>=0;k--)
		{
			t2[x]=b[k]-'0';
			x++;
		}
		for(int k=0;k<l;k++)
		{
			t2[k]+=t1[k];
			if(b[k]>9)
			{
				t2[k]-=10;
				t2[k+1]++;
			}
		}
		if(t2[l]>0)
		cout<<t2[l];
		for(int i=l-1;i>=0;i--)
		cout<<t2[i];
		cout<<endl;
	}
		return 0;
} 




