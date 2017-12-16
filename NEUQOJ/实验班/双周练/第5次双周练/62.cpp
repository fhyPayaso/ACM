#include<iostream>
using namespace std;
const int maxn=1000000+5;
int a[maxn];
int judge(int k)
{
	while(k!=0)
	{
		if(k%100==62||k%10==4)
		return 0;
		k/=10;
	}
	return 1;
}
int main()
{
	int l,r;
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=maxn;i++)
	{
		if(!judge(i))
		a[i]=a[i-1];
		else
		a[i]=a[i-1]+1;	
	}
	while(cin>>l>>r)
	{
		if(l==0&&r==0) break;
		cout<<a[r]-a[l-1]<<endl;
	}
	return 0;
}


