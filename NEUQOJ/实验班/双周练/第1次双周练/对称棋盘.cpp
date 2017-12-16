#include<iostream>
#include<cmath>
using namespace std;
struct aaaa
{
	int x,y;
};
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		aaaa z[1005];
		for(int i=1;i<=n;i++)
			cin>>z[i].x>>z[i].y;
			
		int res=0,res1=0,temp;
		int flag=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i!=j)
				{
					if(z[i].x==z[j].x)
					{
						if(flag==0)
						{
							temp=abs(z[i].y-z[j].y);
							if(temp%2==1)
								temp=temp/2+1;
							else
								temp/=2;
							flag=1;
						}
						else
						{
							int tp=abs(z[i].y-z[j].y);
							if(tp%2==1)
								tp=tp/2+1;
							else
								tp/=2;
								
							if(tp!=temp)	
							res=1;
						}
					}
					
					if(z[i].y==z[j].y)
					{
						if(flag==0)
						{
							temp=abs(z[i].x-z[j].x);
							if(temp%2==1)
								temp=temp/2+1;
							else
								temp/=2;
							flag=1;
						}
						else
						{
							int tp=abs(z[i].x-z[j].x);
							if(tp%2==1)
								tp=tp/2+1;
							else
								tp/=2;
								
							if(tp!=temp)	
							res1=1;
						}
					}	
				}
			}
		}
		if(res==0||res1==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;		
	}
	return 0;
 } 
