#include<iostream>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	int n;
	int a[505];
	while(cin>>n)
	{
		int res=0,pos=1;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++)
		{
			if(a[i]) 		res+=10;
			else if(!a[i]) 
			{
				if(res-5>=0)
				res-=5;
				else 
				res=0;
			 } 
			
			if(res>=100)
			{
				i++;
				if(i>n) break;
				if(a[i])
				{
					i++;
					if(i>n) break;
					if(a[i])
					{
						pos++;
						res=0;
					}
					else if(!a[i])
					{
						i++;
						if(i>n) break;
						if(a[i])
						{
							pos++;
							res=0;	
						}
						else if(!a[i])
						{
							res=60;
						}
					}
				}
				else if(!a[i])
				{
					i++;
					if(i>n) break;
					if(a[i])
					{
						i++;
						if(i>n) break;
						if(a[i])
						{
							pos++;
							res=0;	
						}
						else if(!a[i])
						{
							res=60;
						}
					}
					else if(!a[i])
					{
						res=60;
					}
				}
				
				
			}			
		}
		if(pos==1) cout<<'D';
		else if(pos==2) cout<<'C';
		else if(pos==3) cout<<'B';
		else if(pos==4) cout<<'A';
		else if(pos>=5) cout<<'S';
		cout<<endl;
	}
	
	return 0;
 } 
