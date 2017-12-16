#include<iostream>
#include<iomanip>
using namespace std;
double f(int x)
{
	double t=1.0;
	for(int i=1;i<=x;i++)
	t*=i;
	double r=1.0/t;
	return r;
}
int main()
{
	cout<<"n e"<<endl;
	cout<<"- -----------"<<endl;
	for(int i=0;i<10;i++)
	{
		double ans;
		if(i==0)      ans=1;
		else if(i==1) ans=2;
		else          ans+=f(i);

		if(i>2) cout<<fixed<<setprecision(9);
		cout<<i<<" "<<ans<<endl;	
	}
	
	return 0;
 } 
