#include<iostream>
#include<cstring>
#include<queue>
#include<set>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<iomanip>

using namespace std;
const int MAXN=9999999;

int main()
{
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	int t;
	int time,per,boom;
	int sum,x;
	cin>>t;
	while(t--)
	{
		cin>>time>>per>>boom;
		sum=time*per;
		x=time/10;
		while(x>=3)
		{
			x-=3;
			sum+=boom;
		}
		cout<<sum<<endl;
	}
	return 0;
 } 
