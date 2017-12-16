#include<iostream>
using namespace std;
int main()
{
	int i,j,k,a[51],left,mid,right,sum;
	for(i=1;i<=49;i++)
	a[i]=i;
	
	for(i=1;i<=46;i++)
	{
		for(j=i+2;j<=48;j++)
		{
			left=0;mid=0;right=0;
			for(k=1;k<i;k++) left+=a[k];
			for(k=i+2;k<j;k++) mid+=a[k];
			for(k=j+2;k<=49;k++) right+=a[k];
			sum=left+a[i]*a[i+1]+mid+a[j]*a[j+1]+right;
			if(sum==2015)
			cout<<i<<endl;
		}
	}
	return 0;
}
