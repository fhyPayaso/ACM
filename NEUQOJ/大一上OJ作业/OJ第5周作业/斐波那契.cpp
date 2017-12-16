#include<iostream>
using namespace std;
int main()
{
	int t,a,b,n,str[100];
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b>>n;
		str[1]=a;
		str[2]=b;
		for(int j=3;j<=n;j++)
		{
			if(j%2==1)
			str[j]=str[j-1]+str[j-2];
			else
			str[j]=str[j-1]+str[j-2]+str[j-3];
		}
		cout<<str[n]<<endl;
	}
	return 0;
} 
