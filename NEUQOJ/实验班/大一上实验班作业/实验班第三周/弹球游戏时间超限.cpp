#include<iostream>
using namespace std;
int main()
{
	int n,t;
	while(cin>>n)
	{
		char a[n+2];
		int x=0;
		for(int i=1;i<=n;i++)
		cin>>a[i];
		for(int j=1;j<=n;j++)
		{
			t=j;
			for(int i=0;;i++)
			{
				if(t==0||t==n+1)
				{
					x++;
					break;
				}
				if(a[t]=='>'&&a[t+1]!='<')
				t++;
				else if(a[t]=='<'&&a[t-1]!='>')
				t--;
				else
				break;
			}
			if(a[j]==a[j+1])
			{
				x++;
				j++;
			}	
		}
		cout<<x<<endl;
	}
	return 0;
} 
