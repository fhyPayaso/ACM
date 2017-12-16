#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[20],t2=0,sum=0;
	float t1=0,avr;
	for(int i=0;i<20;i++)
	cin>>a[i];
	for(int i=0;i<20;i++)
	{
		if(a[i]>0)
		{
			sum+=a[i];
			t1++;
		}
		else if(a[i]<0)
		t2++;
	}
	avr=sum/t1;
	cout<<t2<<endl<<setiosflags(ios::fixed)<<setprecision(2)<<avr<<endl;
	return 0;
}
