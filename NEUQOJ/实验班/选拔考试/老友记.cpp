#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str[1005][2];
	string res[1005][2];
	int n;
	cin>>str[0][0]>>str[0][1];
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>str[i][0]>>str[i][1];
		
	res[0][0]=str[0][0];	
	res[0][1]=str[0][1];
	
	for(int i=1;i<=n;i++)
	{
		if(str[i][0]==res[i-1][0])
		{
			res[i][0]=str[i][1];
			res[i][1]=res[i-1][1];
		}
		else if(str[i][0]==res[i-1][1])
		{
			res[i][1]=str[i][1];
			res[i][0]=res[i-1][0];
		}
	}	
	
	for(int i=0;i<=n;i++)
		cout<<res[i][0]<<" "<<res[i][1]<<endl;
	
	return 0;
} 
