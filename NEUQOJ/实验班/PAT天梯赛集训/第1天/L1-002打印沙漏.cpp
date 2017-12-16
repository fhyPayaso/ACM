#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int num[25],n,x=1,i,j,s;
	char a;
	num[1]=1;
	for(i=2;i<1000;i++)
	{
		num[i]=num[i-1]+(x+2)*2;
		x+=2;
		if(num[i]>1000) 
		break;
	}
	cin>>n>>a;
	
	for(j=1;j<=i;j++)
	{
		if(num[j]<=n&&n<num[j+1])
		{
			s=n-num[j];
			break;
		}
	}
	int w=j*2-1;
	for(i=1;i<j;i++)
	{
		for(int k=1;k<=i-1;k++)
		cout<<" ";
		for(int k=1;k<=w;k++)
		cout<<a;
		w-=2;
		cout<<endl;
	}
	for(int k=1;k<j;k++)
	cout<<" ";
	cout<<a<<endl;
	w+=2;
	for(i=j-1;i>0;i--)
	{
		for(int k=1;k<=i-1;k++)
		cout<<" ";
		for(int k=1;k<=w;k++)
		cout<<a;
		w+=2;
		cout<<endl;
	}
	
	cout<<s<<endl;
	
	return 0;
} 

