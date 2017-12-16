#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,sum,i=0,x=0; 
	char res[10];
	cin>>a>>b;
	sum=a+b;
	int temp=sum;
	if(sum<0) 
	{
		cout<<"-";
		sum=-sum;
	}
	if(sum<1000)cout<<sum;
	else if(1000<=sum&&sum<1000000)
	{
		int temp1=sum%1000;
		int temp2=sum/1000;
		cout<<temp2<<","<<setw(3)<<setfill('0')<<temp1;
	}
	else if(sum>=1000000)
	{
		int temp1=sum%1000;
		sum/=1000;
		int temp2=sum%1000;
		int temp3=sum/1000;
		cout<<temp3<<","<<setw(3)<<setfill('0')<<temp2<<","<<setw(3)<<setfill('0')<<temp1;
	}
	return 0;  
}


 
