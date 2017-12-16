#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		char  s[500];
		stack <char> left;
		gets(s);
		if(strcmp(s,"\n")==0)
		{
			cout<<"Yes"<<endl;
			continue;
		}
		
		int flag=1;
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]=='('||s[i]=='[')
			left.push(s[i]);
			else if(s[i]==')'||s[i]==']')
			{
				if(!left.empty())
				{
					char temp=left.top();
					if((temp=='('&&s[i]==')')||(temp=='['&&s[i]==']'))
					{
						left.pop();
						continue;
					}
					else if((temp=='('&&s[i]==']')||(temp=='['&&s[i]==')'))
					{
						flag=0;
						break;
					}
					
				}
				else
				{
					flag=0;
					break;
				}	
			}		
		}
		if(!left.empty())
			flag=0;	
		if(flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;		
	}
	return 0;
}
