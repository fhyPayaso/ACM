#include<iostream>
using namespace std;
char a[256];
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		cin>>a[i];
		int t=0;
		for(int i=0;i<n;i++)	
		{
			if(a[i]=='(')
			{
				while(a[i]!=')')
				{
					i++;
					if(a[i]=='_') 
					t++;
				}
				t++;
			}
	
		}
	
	}
	return 0;
}
