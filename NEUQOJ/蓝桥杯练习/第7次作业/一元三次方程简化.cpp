#include<iostream>
#include<stdio.h>
using namespace std;
float a,b,c,d;
float js(float x)
{
	float res;
	res=a*x*x*x+b*x*x+c*x+d;
	return res;
}
int main()
{
	while(cin>>a>>b>>c>>d)
	{
		for(int i=-10000;i<=10000;i++)
		{
			float left=(i-0.05)*1.00/100;
			float right=(i+0.05)*1.00/100;
			if(js(left)*js(right)<=0)
			printf("%.2f ",i*1.0/100);
		}
	}
	return 0;
 } 
