#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int n,f=0;
	string home;
	char str[105][5];
	cin>>n;
	cin>>home;
	for(int i=1;i<=n;i++) 
	{
		cin>>str[i];
		if(str[i][0]==home[0]&&str[i][1]==home[1]&&str[i][2]==home[2])
		f++;
	}
	
	if(f==n/2&&n%2==0)
		cout<<"home"<<endl;
	else
		cout<<"contest"<<endl;
	
	return 0;
} 
