#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	//freopen("in.txt","r",stdin);
	int n,food[1010],res[1010],rem;
	while(cin>>n)
	{
		if(!n) break;
		memset(res,0,sizeof(res));
		for(int i=1;i<=n;i++) cin>>food[i];

		cin>>rem;
		
		rem-=5;//***
		
		sort(food+1,food+n+1);//***
		int temp=5-food[n];
		
		for(int i=1;i<n;i++)
		{
			for(int j=rem;j>=food[i];j--)
				res[j]=max(res[j],res[j-food[i]]+food[i]);
		}	
		
		if(rem<0) cout<<rem+5<<endl;
		else cout<<rem-res[rem]+temp<<endl;
	}
	
	return 0;
}
