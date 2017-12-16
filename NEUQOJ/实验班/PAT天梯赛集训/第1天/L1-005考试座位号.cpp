#include<iostream>
#include<string>
using namespace std;
struct xin
{
	string num;
	int shi;
	int kao;
};

int main()
{
	int n,m,i,j,temp[1005];
	xin xue[1005];
	cin>>n;
	for(i=1;i<=n;i++)	
	cin>>xue[i].num>>xue[i].shi>>xue[i].kao;
	cin>>m;
	for(i=1;i<=m;i++) 
	cin>>temp[i];
	
	for(i=1;i<=m;i++) 
	{
		for(j=1;j<=n;j++)
		{
			if(temp[i]==xue[j].shi) 
			{
				cout<<xue[j].num<<" "<<xue[j].kao<<endl;
				break;
			}
		}
	}
	
	return 0;
}
