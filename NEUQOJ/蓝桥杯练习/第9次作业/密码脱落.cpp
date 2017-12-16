#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
//ABCBBAB 
int a[1005][1005];
char s[1005];
int dp(int left ,int right)
{
	if(left>=right)       return 0;
	if(a[left][right]>=0) return a[left][right];
	if(s[left]==s[right]) 
	{
		a[left][right]=dp(left+1,right-1);
		return a[left][right];
	}
	else
	{
		a[left][right]=min(dp(left+1,right),dp(left,right-1));
		a[left][right]++;
		return a[left][right];
	}
}
int main()
{
	cin>>s;
	int l=strlen(s);
	memset(a,-1,sizeof(a));
	dp(0,l-1);
	cout<<a[0][l-1]<<endl;
	return 0;
 } 
 
 
 
