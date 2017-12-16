#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[10000],b[10000];
	int i,j;
	while(cin>>a)
	{
		int l=strlen(a),max=0;
		for(i=0;i<l;i++)
		b[i]=a[l-i-1];
		for(i=0;i<l;i++)
		{
			for(j=0;j<l;j++)
			{
				int s1=i,s2=j,n=0;
				while(a[s1]==b[s2])
				{
					if(s1==l||s2==l)
					break;
					s1++;
					s2++;
					n++;
				}
				if(n>max)
				max=n;
			} 	
		}
		cout<<max<<endl;
	}
	return 0;
} 
