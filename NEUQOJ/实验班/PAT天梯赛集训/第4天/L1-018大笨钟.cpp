#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if(s<="12:00")
	{
		
		cout<<"Only "<<s<<".  Too early to Dang.";
	}
	else
	{
		int shi=0,fen=0;
		shi+=(s[0]-'0')	*10;
		shi+=s[1]-'0';
		fen+=(s[3]-'0')	*10;
		fen+=s[4]-'0';
		
		for(int i=1;i<=shi-12;i++)
		cout<<"Dang";
		if(fen>0)
		cout<<"Dang";
	}
	
	return 0;
}
