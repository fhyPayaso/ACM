#include<iostream>
#include<cmath>
using namespace std;
const int maxn=100005;
int d[maxn],t[maxn];
int main()
{
	int n,l,i,j,k,sum=0,s=0,temp;
	cin>>n>>l;
	for(i=1;i<=n;i++)
	{
		cin>>d[i];
		cin>>t[i];
	}
	int p1,p2,p3,p4=l;
	for(p1=1;i<=l;p1++)
	{
		for(p2=p1;p2<=l;p2++)
		{
			for(p3=p2;p3<=l;p3++)
			{
				for(i=1;i<=n;i++)
				{
					temp=abs(d[i]-p1);
					if(abs(d[i]-p2)<temp) temp=abs(d[i]-p2);
					if(abs(d[i]-p3)<temp) temp=abs(d[i]-p3);
					if(abs(d[i]-p4)<temp) temp=abs(d[i]-p4);
					s+=t[i]*temp;
				}
				if(s<sum)
				sum=s;
			}
		}
	}
	cout<<sum<<endl;
	
	return 0;
 } 
