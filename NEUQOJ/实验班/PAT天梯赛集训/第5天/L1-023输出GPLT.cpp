#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int s1=0,s2=0,s3=0,s4=0;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='g'||str[i]=='G') s1++;
		else if(str[i]=='p'||str[i]=='P') s2++;
		else if(str[i]=='l'||str[i]=='L') s3++;
		else if(str[i]=='t'||str[i]=='T') s4++;
	}
	
	while(s1||s2||s3||s4)
	{
		
		if(s1) 
		{
			cout<<"G";
			s1--;
		}
		if(s2)
		{
			cout<<"P";
			s2--;
		} 
		if(s3) 
		{
			cout<<"L";
			s3--;
		}
		if(s4) 
		{
			cout<<"T";
			s4--;
		}
	}
	
	return 0;
}
