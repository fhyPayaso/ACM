#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[105],i,sum,max=-1,min=101;
	double avr,n;
	while(cin>>n)
	{
		sum=0;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(a[i]>max) max=a[i];
			if(a[i]<min) min=a[i]; 
		}
		sum=sum-(max+min);
		n-=2.0;
		avr=sum/n;
		cout<<fixed<<setprecision(2)<<avr<<endl;
	}
	return 0;
 } 
