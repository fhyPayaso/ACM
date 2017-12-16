#include<iostream>
using namespace std;
const int maxn=100000;
int hashi[maxn]={0};
int main()
{
	
	string temp;
	while(cin>>temp)
	{
		int sum=0;
		for(int i=0;i<temp.size();i++)
			sum+=(temp[i]-'a'+1);
		hashi[sum]++;		
	}
	
	
	for(int i=1;i<=maxn;i++)
	{
		if()
	}
	
	return 0;
 } 
