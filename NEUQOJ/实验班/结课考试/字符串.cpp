#include<iostream>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	 string s;
	 int n;
	 while(cin>>s)
	{
		cin>>n;
		if(s=="a")
		{
			cout<<0<<endl;
			continue;
		 } 
		unsigned long long res=0;
		for(int i=s.size()-1;i>=0;i--)
		{
			int temp=s[i]-'a';
			unsigned long long c=pow(26,s.size()-i-1);
			res+=temp*c;
		}
		int b[1000];
		int i=0;
		while(res)
		{
			int temp;
			b[i]=res%n;
			res/=n;
			i++;
		}
		for(int j=i-1;j>=0;j--)
		cout<<b[j];
		cout<<endl;
	}
	
	return 0;
 } 
