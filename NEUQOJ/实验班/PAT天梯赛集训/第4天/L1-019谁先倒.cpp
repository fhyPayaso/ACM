#include<iostream>
using namespace std;
int main()
{
	int jia,yi,n,x;
	int jh,ja,yh,ya;
	cin>>jia>>yi>>n;
	int jia1=0,yi1=0;
	for(int i=1;i<=n;i++)
	{
		cin>>jh>>ja>>yh>>ya;
		if(ja==ya)
		continue;
		x=jh+yh;
		if(x==ja)
		{
			jia--;
			jia1++;
			if(jia<0)
			{
				cout<<"A"<<endl;
				cout<<yi1;
				break;
			}
		}
		else if(x==ya)
		{
			yi--;
			yi1++;
			if(yi<0)
			{
				cout<<"B"<<endl;
				cout<<jia1;
				break;
			}
		}
	}
	return 0;
 } 
