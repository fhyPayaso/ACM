#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	char temp;
	cin>>s1;
	s2=s1;
	int l=s2.size();
	for(int i=0;i<l/2;i++)
	{
		temp=s2[i];
		s2[i]=s2[l-i-1];
		s2[l-i-1]=temp;
	}
	s1+=s2;
	cout<<s1;
	return 0;
}
 
