#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int res[105][105][105];
int maxn(int a,int b,int c)
{
	int t=max(a,b);
	if(t>c) return t;
	else return c;
}
int main()
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	memset(res,0,sizeof(res));
	for(int i=1;i<s1.size();i++)
	{
		for(int j=1;j<s2.size();j++)
		{
			for(int k=1;k<s3.size();k++)
			{
				if(s1[i]==s2[j]&&s1[i]==s3[k]&&s2[j]==s3[k])
				res[i][j][k]=res[i-1][j-1][k-1]+1;
				else
				res[i][j][k]=maxn(res[i-1][j][k],res[i][j-1][k],res[i][j][k-1]);
			}
		}
	}
	cout<<res[s1.size()-1][s2.size()-1][s3.size()-1];
	return 0;
 } 
