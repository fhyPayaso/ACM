#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
const long long mod=1000000000+7;
const long long maxn=10000000;
unsigned long long n,k,nk;
long long quickpow( long long n, long long k)
{
	unsigned long long res=1;
	n%=mod;
	while(k>0)
	{
		if(k%2==1)res=res*n%mod;
		n=n*n%mod;
		k/=2;
	}
	return res%mod;
}

int main()
{
	
	int x=1;
	while(cin>>n>>k)
	{
		nk=quickpow(n,k);

		cout<<"Case #"<<x++<<": "<<nk%mod<<endl;
	}
	return 0;
} 
