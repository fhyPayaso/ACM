#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int i;
	string s1,s2;
	cin>>s1>>s2;
	int l=s1.size();
	for(i=0;i<l;i++)
	{
		if(s1[i]==s2[0])
		break;	
	}
	cout<<i+1<<endl;
	return 0;
} 
