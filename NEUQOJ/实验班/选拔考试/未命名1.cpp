#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,j;
	int a[105],b[105],q1[6],q2[6],sum=0;
	cin>>n;
	
	for(i=1;i<=5;i++) q1[i]=0;
	for(i=1;i<=5;i++) q2[i]=0;
	for(i=1;i<=n;i++) 
	{
		cin>>a[i];
		q1[a[i]]++;
	}
	for(i=1;i<=n;i++) 
	{
		cin>>b[i];
		q2[b[i]]++;
	}
	
	for(i=1;i<=5;i++)
	{
		int temp1=q1[i]+q2[i];
		int temp2=abs(q1[i]-q2[i])/2;
		if(temp1%2==1)
		{
			cout<<"-1"<<endl;
			break;
		}
		else
		sum+=temp2;
	}
	sum/=2;
	cout<<sum<<endl;
	
	return 0;
} 
