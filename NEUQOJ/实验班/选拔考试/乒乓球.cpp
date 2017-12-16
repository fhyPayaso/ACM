#include<iostream>
using namespace std;
int main()
{
	long long k,a,b,res;
	int flag=0;
	cin>>k>>a>>b;
	res=a/k+b/k;
	if(k>a&&b%k!=0) flag=1;
	if(k>b&&a%k!=0) flag=1;
	if(flag)
		cout<<"-1"<<endl;
	else
		cout<<res<<endl;
	return 0;
}
