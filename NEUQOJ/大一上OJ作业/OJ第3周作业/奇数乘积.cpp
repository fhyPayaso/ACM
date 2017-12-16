#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n)
	{
		int s=1,x=0;
		for(int i=0;i<n;i++)
		{
			cin>>m;
			if(m%2==1)
			{
				s*=m;
				x++;
			}
		}
		if(x==0)
			break;
		else
			cout<<s<<endl;	
	}
	return 0;
} 
