#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int t,a[1005];
stack <int > tra;
bool judge()
{
	int std=1;
	for(int i=1;i<=t;i++)
	{
		tra.push(i);				
		while(tra.top()==a[std])
		{
			if(!tra.empty())
			tra.pop();
			std++;
			if(tra.empty())
			break;
			}
	}
	
	if(std==t+1)
		return true;
	else
		return false;	
}

int main()
{
	
	while(cin>>t)
	{	
		if(t==0)
		break;
			
		while(cin>>a[1])
		{
			if(a[1]==0)
			break;
			for(int i=2;i<=t;i++)
			cin>>a[i];
			
			while(!tra.empty())
			tra.pop();
			
			if(judge())
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;	
		}
		cout<<endl;	
	}
	
	return 0;
} 
