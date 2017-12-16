#include<iostream>
#include<cstring>
#include<iomanip>
#include<string>
#include<cmath>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include<stack>
using namespace std;
int a[20],res[20],mi[20],temp,num;
int main()
{
	num=0;
	memset(res,0,sizeof(a));
	while(cin>>temp)
	{
		num++;
		a[num]=temp;
	}
	for(int i=1;i<=num;i++)
	{
		res[i]=1;
		mi[i]=1;
	}	
	
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(a[i]<a[j])
				res[i]=max(res[i],res[j]+1);
			else
				mi[i]=max(mi[i],mi[j]+1);
		}
		
	}
	sort(res+1,res+num+1);
	sort(mi+1,mi+num+1);

	cout<<res[num]<<endl; 
	cout<<res[num]<<endl<<mi[num]<<endl;
	return 0;
}

