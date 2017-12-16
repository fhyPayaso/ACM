#include<iostream>
using namespace std;
int main()
{
	unsigned long long str[75];
	int n;
	cin>>n;
	str[0]=0;
	str[1]=1;
	str[2]=0;
	if(n<=75)
	{
	for(int i=3;i<n;i++)
		{
			str[i]=1+str[i-1]+str[i-2]+str[i-3];
		}
			cout<<str[n-1]<<endl;
	}	
	return 0;
}
