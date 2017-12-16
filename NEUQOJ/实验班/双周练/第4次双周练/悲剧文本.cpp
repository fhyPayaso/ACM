#include<iostream>
#include<string>
using namespace std;
const int maxn=100000+5;
string text;
int next[maxn];
int main()
{
	while(cin>>text)
	{
		int now,last;
		
		for(int i=0;i<text.size();i++)
		{
			if(text[i]=='[')
				now=0;
			else if(text[i]=']')
				now=last;
			else
			{
				
			}
		}
	}
	return 0;
}
