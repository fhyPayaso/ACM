#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x1,y1,x2,y2;
	int l,t1,t2;
	cin>>x1>>y1>>x2>>y2;
	t1=abs(x1-x2);
	t2=abs(y1-y2);
	l=sqrt(t1*t1+t2*t2);
	cout<<l<<endl;
	return 0;
}
