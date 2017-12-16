#include<iostream>
#include<cstring>
#include<queue>
#include<set>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<iomanip>

using namespace std;
const int MAXN=10007;

int main()
{
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	int t,n,i,j,temp,sum;
	int tab[55];
	
	tab[1]=1;
	tab[2]=2;
	tab[3]=4;
	for(i=4;i<=50;i++)
	{
		tab[i]=tab[i-1]+tab[i-2]+tab[i-3];
		tab[i]%=MAXN;
	}
	
	cin>>t;
	while(t--)
	{
		sum=1;
		cin>>n;
		for(i=1;i<n;i++)
		{
			cin>>temp;
			sum*=tab[temp];
			sum%=MAXN;
		}
		cout<<sum<<endl;
	}

	return 0;
 } 
