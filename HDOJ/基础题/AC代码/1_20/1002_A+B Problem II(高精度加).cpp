#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int maxn=10000;
int main()
{
	int t,ok=0;;
	cin>>t;
	string s1,s2;
	int a[maxn],b[maxn];
	for(int ti=1;ti<=t;ti++)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		
		cin>>s1>>s2;
		int l1=s1.size(),l2=s2.size();
		
		for(int i=0;i<l1;i++)  a[i]=s1[l1-i-1]-'0';
		for(int i=0;i<l2;i++)  b[i]=s2[l2-i-1]-'0';
		int l=max(l1,l2);
		
		for(int i=0;i<l;i++)
		{
			a[i]+=b[i];
			if(a[i]>9)
			{
				if(i==l-1) l++; 
				a[i]-=10;
				a[i+1]++;
			}	
		}
		if(!ok) ok=1;
		else cout<<endl;
		cout<<"Case "<<ti<<":"<<endl;
		cout<<s1<<" + "<<s2<<" = ";
		for(int i=l-1;i>=0;i--)cout<<a[i];
		cout<<endl;
	}
	
	return 0;
}
//1111111111111111110
