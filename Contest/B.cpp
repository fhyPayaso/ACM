#include<iostream>
#include<algorithm>
using namespace std;
const long long maxn=1024*1024+5;
long long n;
int a[maxn];
int pow(int n)
{
	int r=1;
	for(int i=1;i<=n;i++)
	r*=2;
	return r;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int me=a[1];
	int temp=n,cot=0,pos,res;
	while(temp!=1)
	{
		temp/=2;
		cot++;
	}

	sort(a+1,a+n+1);
	
	for(int i=1;i<=n;i++)
	{
		if(a[i]==me)
		{
			if(i<n&&a[i]<a[i+1]) pos=i;
			else if(i==n)        pos=n;	
		}
	}
	
	for(int i=1;i<=cot;i++)
	{
		if(pow(i-1)<=pos&&pos<pow(i))
		res=i;
	}
	if(pos==n) res=cot;
	
	
	
//	if(pos==1) res=0; 
//	else if(pos<=n/2) res=pos;
//	else if(pos<n) res=n/2;
//	else if(pos==n) res=(n-2)/2+1;
	cout<<res<<endl;
	return 0;
}
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
// 1 1
/* 
1 1
2 2
3 2
4 3
5 3
6 3
7 3
8 4
9 4
10 4
11 4
12 4
13 4
14 4
15 4
16 4*/

 
