#include<iostream>
#include<algorithm>
using namespace std;
int a[100005],n,k,x;
void f()
{
	sort(a+1,a+n+1);
}
void ff()
{
	for(int j=1;j<=k;j++)	
	{
		for(int i=1;i<=n;i++)
		{
			if(i%2==1)
			a[i]=a[i]^x;
		}
		f();	
	}
}
int main()
{
	cin>>n>>k>>x;
	for(int i=1;i<=n;i++) cin>>a[i];
	f();
	ff();
	cout<<a[n]<<" "<<a[1]<<endl;
	return 0;
 } 
