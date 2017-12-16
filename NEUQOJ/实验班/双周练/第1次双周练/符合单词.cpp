#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s[120005];
	string temp;
	int len=0;
	while(cin>>temp)
		s[++len]=temp;
	
	for(int i=1;i<=len;i++)
	{
		temp=s[i];
		int flag=0;
		for(int j=1;j<=len;j++)
		{
			if(temp[0]==s[j][0])
			{
				for(int k=1;k<=len;k++)
				{
					if(temp==s[j]+s[k])
					{
						cout<<s[i]<<endl;
						flag=1;
						break;
					}
				}
			}
			if(flag==1)
			break;
		}
	}
	return 0;
}
