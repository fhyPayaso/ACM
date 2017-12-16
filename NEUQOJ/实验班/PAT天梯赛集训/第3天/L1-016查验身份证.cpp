#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int flag=0,n,a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char b[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	string str[105];
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>str[i];
	
	for(int i=1;i<=n;i++)
	{
		int temp,sum=0,l=0;
		for(int j=0;j<17;j++)
		{
			if('9'<str[i][j]||str[i][j]<'0')
			{
				if(flag==0)
				{
					cout<<str[i];
					flag=1;
				}
				else
				cout<<endl<<str[i];
				l=1;
				break;
			} 
			else
			{
				temp=str[i][j]-'0';
				sum+=(temp*a[j]);
			}
		}
		if(l==1) continue;
		sum%=11;
		if(b[sum]!=str[i][17]&&flag==0)
		{
			cout<<str[i];
			flag=1;
		}
		else if(b[sum]!=str[i][17]&&flag==1)
		cout<<endl<<str[i];
	}
	if(flag==0)
	cout<<"All passed";
	return 0;
}
