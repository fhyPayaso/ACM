#include<iostream>
using namespace std;
int main()
{
	int m,n,t;
	long long s;
	cin>>t;
	for(int i=1;i<=t;i++)
	  {
	  	s=0;
		cin>>m>>n;
		m-=1;
		n-=1;
		for(;m!=0&&n!=0;m--,n--)
		{s+=m*n;}
		cout<<s<<endl;	
	  }
	return 0;
}
