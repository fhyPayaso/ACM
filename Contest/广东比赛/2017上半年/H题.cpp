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
const int MAXN=9999999;

int main()
{
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	int n,i,j;
	cin>>n;
	
	int k=1;
	for(i=1;i<n;i++)
	{
		int temp=n;
		for(j=1;j<=n-i;j++)
		cout<<" ";
		
		for(j=1;j<=k;j++)
		{
			cout<<temp;
			if(j<i)
				temp--;
			else
				temp++;
		}
		k+=2;
		cout<<endl;
	}
	
	for(i=n;i>1;i--) cout<<i;
	for(i=1;i<=n;i++) cout<<i;
	cout<<endl;
	
	k-=2;
	for(i=1;i<n;i++)
	{
		int temp=n;
		for(j=1;j<=i;j++)
		cout<<" ";
		
		for(j=1;j<=k;j++)
		{
			cout<<temp;
			if(j<n-i)
				temp--;
			else
				temp++;
		}
		k-=2;
		cout<<endl;
	}
	return 0;
 } 
 

