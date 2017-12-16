#include<iostream>
using namespace std;
int main()
{
	
	
	int n;
	while(cin>>n)
	{
		if(!n) break;
		
		int time=0,pos=0,a[105];
		
		for(int i=1;i<=n;i++) cin>>a[i];
		
		for(int i=1;i<=n;i++)
		{
			if(a[i]>pos) time+=(a[i]-pos)*6;
			else time+=(pos-a[i])*4;
			time+=5;
			pos=a[i];
		}
		cout<<time<<endl;
	}	
	return 0;
}
