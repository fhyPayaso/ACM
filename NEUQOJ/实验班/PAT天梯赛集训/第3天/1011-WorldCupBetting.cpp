#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double race[4][4],max[4],sum;
	char s[4]={' ','W','T','L'};
	char res;
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		cin>>race[i][j];
	}
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			if(race[i][j]>max[i])
			{
				max[i]=race[i][j];
				res=s[j];
			}
		}
		cout<<res<<" ";
	}
	sum=(max[1]*max[2]*max[3]*0.65-1.0)*2;
	cout<<fixed<<setprecision(2)<<sum;
	
	
	return 0;
}
