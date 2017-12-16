#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	string s;
	int n,k,sum=0,l,i;
	int temp1=0,temp2=0;
	cin>>s;
	cin>>k;
	
	l=s.length();
	
	for(i=l-1;i>=0;i--)
	{
		if(s[i]=='0')
		{
			temp1++;
		}
		else
		{
			temp2++;
		}
		if(temp1==k)
		{
			sum=temp2;
			break;
		}
	}
	if(temp1==k)
		cout<<sum<<endl;
	else
		cout<<l-1<<endl;
	return 0;
}
