#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s1[1000],s2[1000];
	int i,j,l1,l2,s;
	while(cin>>s1)
	{
		int m=0,len=strlen(s1),i,j;
		for(i=0;i<len;i++)
		s2[i]=s1[len-1-i];
		
		for(i=0;i<len;i++)
		{
			for(j=0;j<len;j++)
			{
				l1=i;l2=j;s=0; 
				while(s1[l1]==s2[l2])
				{
					if(l1==len||l2==len)
					break;
					l1++;l2++;s++;
				}
				if(s>m) m=s;
			}
		}
		cout<<m<<endl;	
	}
	return 0;
}
