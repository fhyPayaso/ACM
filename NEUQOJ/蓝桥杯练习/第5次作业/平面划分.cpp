#include<iostream>
using namespace std;
int main()
{
	int t,n,m;
	long long s1,s2;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		s1=2*n*n-n+1;
		s2=m*m-m+2; 
		cout<<s1<<" "<<s2<<endl;
	}
	return 0;
 } 
