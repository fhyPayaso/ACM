#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,i,j;
	string s[30];
	cin>>n;
	s[1]="A";
	for(i=2;i<=n;i++)
	{
		s[i]=s[i-1]+char('A'+i-1)+s[i-1];
	}
	cout<<s[n];
	return 0;
 } 
