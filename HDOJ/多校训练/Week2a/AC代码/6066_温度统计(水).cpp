#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	
	int t;
	int c[1005];
	while(cin>>t)
	{
		int res=0;
		memset(c,0,sizeof(c));
		for(int i=1;i<=t;i++)
		{
			cin>>c[i];
			if(c[i]<=35)
			res++;
		}
		cout<<res<<endl;
		
	}
	return 0;
}
