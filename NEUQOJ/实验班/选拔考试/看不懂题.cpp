#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[6],x=0;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	if(n==1) cout<<a[0];
	else if(n==3) cout<<a[1];
	else cout<<a[2];
	return 0;
}
