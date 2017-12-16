#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	string s;
	for(i=0;i<t;i++)
	{
		cin>>s;
		int l=s.size();
		while(s[l-1]=='0'&&l-1>1) l--;
		if(s[0]=='-') 
		{
			cout<<s[0];
			for(j=l-1;j>0;j--)
			cout<<s[j];
			cout<<endl;
		}
		else
		{
			for(j=l-1;j>=0;j--)
			cout<<s[j];
			cout<<endl;	
		}
	}
	return 0;
}
