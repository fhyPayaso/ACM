#include<iostream>
#include<iomanip>
#include<cstring>
#include<string>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>

#define MAXN 999999
using namespace std;

int main()
{
	
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);

	int a,b,c;
	int n,i,sum;
	int num1,num2,num3;
	
	cin>>n;
	for(i=1;i<=n;i++)
	{
		
		cin>>a>>b>>c;
		a=a/2;
		c=c/4;
	
		for(num1=0;num1<1005;num1++)
		{
			for(num2=0;num2<1005;num2++)
			{
				num3=c-num1-num2;
				if(num1+num3==a&&num1+num2==b)
				cout<<num1<<endl;		
			}
		}			
	}
	return 0;
 } 
