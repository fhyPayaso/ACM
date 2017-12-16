#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	string str;
	int flag1=0,flag2=0,l;
	double res,sum=0;
	cin>>str;
	if(str[0]=='-')
	{
		flag1=1;
		l=str.length()-1;
	} 
	else
	l=str.length();
 
	char x=str[str.length()-1];
	int xx=x-'0';
	if(xx%2==0)
	flag2=1;
	
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='2')
		sum+=1.0;
	}
	
	res=sum/l;
	if(flag1==1) res*=1.5;
	if(flag2==1) res*=2.0;
	res*=100.0;
	cout<<fixed<<setprecision(2)<<res<<"%";

	return 0;
 } 
