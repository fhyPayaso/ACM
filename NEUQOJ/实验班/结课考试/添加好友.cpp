#include<iostream>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cstring>
#include<string>
using namespace std;
const int mod=1000000007;
int main()
{
	unsigned long long  n;
	while(cin>>n)
	{
		unsigned long long res=1;
		unsigned long long  a=2;
		n%=mod;
		while(n)
		{
			if(n%2)
			res=(res*a)%mod;
			a=(a*a)%mod;
			n/=2;
		}
		cout<<res-1<<endl;
	}
	return 0;
} 


