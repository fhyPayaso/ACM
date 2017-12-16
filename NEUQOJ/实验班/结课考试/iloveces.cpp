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
	while(cin>>s)
	{
		int a[10];
		memset(a,0,sizeof(a));
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='I'||s[i]=='i') a[1]++;
			else if(s[i]=='L'||s[i]=='l') a[2]++;
			else if(s[i]=='O'||s[i]=='o') a[3]++;
			else if(s[i]=='V'||s[i]=='v') a[4]++;
			else if(s[i]=='E'||s[i]=='e') a[5]++;
			else if(s[i]=='C'||s[i]=='c') a[6]++;
			else if(s[i]=='S'||s[i]=='s') a[7]++;
		}
		a[5]/=2;
		int min=99999999;
		for(int i=1;i<=7;i++)
		{
			if(min>a[i])
			min=a[i];
		}
		cout<<min<<endl;
	}
	return 0;
 } 
