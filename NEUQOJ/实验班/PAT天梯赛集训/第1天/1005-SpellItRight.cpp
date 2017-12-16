#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	string b[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	string c[100];
	int sum=0,i;
	cin>>s;
	if(s=="0")
	{
		cout<<b[0]<<endl;
		return 0;
	}
	for(i=0;i<s.length();i++)
	sum+=s[i]-'0';
	
	i=0;
	while(sum)
	{
		c[i]=b[sum%10];
		sum/=10;
		i++;
	}
	i--;
	
	for(;i>0;i--)
	cout<<c[i]<<" ";
	cout<<c[i]<<endl;
	
	return 0;
}
