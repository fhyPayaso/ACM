#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
const int maxn=10000;
struct nn
{
	double mouse,cat;
	double val;
}room[maxn];
bool cmp(nn a, nn b)
{
	if(a.val>b.val) return true;
	return false;
}
int main()
{
	int m,n;
	
	while(cin>>m>>n)
	{
		double ans=0;
		if(m==-1&&n==-1) break;

		for(int i=1;i<=n;i++)
		{
			cin>>room[i].mouse>>room[i].cat;
			if(!room[i].cat)
			{
				ans+=room[i].mouse;
				room[i].mouse=0;
				continue;
			}
			room[i].val=room[i].mouse/room[i].cat;
		}
		sort(room+1,room+n+1,cmp);
		
		for(int i=1;i<=n;i++)
		{
			if(m>=room[i].cat)
			{
				m-=room[i].cat;
				ans+=room[i].mouse;
				
			}
			else
			{
				ans+=m*room[i].val;
				break;
			}
			if(m==0) break;
		}
		printf("%.3f\n", ans);//用cout加iomanip无论如何都WA 
	}

	return 0;
 } 
