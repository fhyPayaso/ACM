#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=2600;
int dp[maxn][maxn];

// 一个DP最长公共子串题，硬是用模拟调过。。。。。 

int main()
{
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	int ti;
	cin>>ti;
	string a,b;
	while(ti--)
	{
		cin>>a>>b;
		int la=a.size();
		int lb=b.size();
		a='#'+a;b='#'+b;
		memset(dp,0,sizeof(dp));
		
		int time=0;
		int i=1,j=1;
		while(i<=la)
		{
			if(a[i]==b[j]||b[j]=='.')
			{
				if(b[j]=='.') b[j]=a[i];
				i++;j++;time++;
			}
			else
			{
				if(b[j]=='*')
				{
					char temp=b[j-1];
					while(a[i]==temp&&(lb-j)<=(la-i))
					{
						i++; time++; 
					}
					j++; 
				}
				else if(b[j+1]=='*')
					j+=2;
				else
					break;		
			}				
		}
		
		if(time==la&&j>=lb) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	
	return 0;
}

