/*n为偶数   res=(2*(2^n-1)^(m-1))/3 
  n为奇数   res=(2*(2^n-1)^(m-1)+1)/3 */
#include<iostream>
#include<cstring>
using namespace std;
const int mod=100000000+7;
int f(int a,int n)
{
	int r=1;
	while(n)
	{
		if(n%2==1) r=a*r%mod;
		a=a*a%mod;
		n/=2;
	}
	return r;
}
long long inv (long long x) 
{
	return f(x,mod-2);
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{

		int n,m;
		cin>>n>>m;
		int res;
		int t2=f(2,n-1);
		int t1=f(t2,m-1);
		if(n%2) res=((2*t1)%mod+1)*inv(3)%mod; 
		else	res=(2*t1)%mod*inv(3)%mod; 
		cout<<res<<endl;	
		
	}
	
	return 0;
} 
