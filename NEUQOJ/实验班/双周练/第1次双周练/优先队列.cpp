#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		int sum=0,b;
		queue <int> x;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cin>>b;
			x.push(b);
		}
		
		while(1)
		{
			int f=0;
			int temp=x.front();
			
			for(int i=1;i<=n;i++)
			{
				int tx=x.front();x.push(tx);x.pop();
				if(tx>temp)
					f=1;
			}	
				
			if(f==1)
			{
				x.pop();
				x.push(temp);
				if(m==0)
					m+=(n-1);
				else
					m--;
			}
			else
			{
				x.pop();
				m--;
				n--;
				sum++;
			}
			if(m==-1&&f==0)
			break;
		}
		cout<<sum<<endl;
	}	
	return 0;
 } 
