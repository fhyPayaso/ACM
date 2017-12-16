#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		char ball[n];
		int x=0;
		cin>>ball;
		for(int i=0;i<n;i++)
		{
			if(ball[i]=='<')
			x++;
			else
			break; 
		}
		for(int i=n-1;i>=0;i--)
		{
			if(ball[i]=='>')
			x++;
			else
			break; 
		}
		cout<<x<<endl;
	}
	return 0;
}
