#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
	int num1[1002],num2[1002];
	char a[1002],b[1002];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(num1,0,sizeof(num1));
		memset(num2,0,sizeof(num2));
		scanf("%s",a);
		scanf("%s",b);
		int j=0,la,lb,max;
		la=strlen(a);
		lb=strlen(b);
		cout<<"Case "<<i<<":"<<endl;
		for(int k=0;k<la;k++)
		cout<<a[k];
		cout<<" + ";
		for(int k=0;k<lb;k++)
		cout<<b[k];
		cout<<" = "; 
		max=la>lb?la:lb;
		for(int k=la-1;k>=0;k--)
		{
			num1[j]=a[k]-'0';
			j++;
		}
		j=0;
		for(int k=lb-1;k>=0;k--)
		{
			num2[j]=b[k]-'0';
			j++;
		}
		for(int k=0;k<max;k++)
		{
			num2[k]+=num1[k];
			if(num2[k]>9)
			{
				num2[k]-=10;
				num2[k+1]++;
			}
		}
		if(num2[max]>0)
		printf("%d",num2[max]);
		for(int k=max-1;k>=0;k--)
		{
			printf("%d",num2[k]);
		}
		 printf("\n");
	}
	
	return 0;
}


