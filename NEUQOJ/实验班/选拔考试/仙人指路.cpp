#include<iostream>
using namespace std;
int main()
{
	bool a[3],temp;
	int time,k;
	cin>>time>>k;
	for(int i=0;i<3;i++) a[i]=false;
	a[k]=true;
	if(k==1) 
	{
		cout<<"0";
		return 0;
	}
	while(k>1)
	{
		if(k%2==0)
		{
			temp=a[1];
			a[1]=a[2];
			a[2]=temp;
		}
		else
		{
			temp=a[0];
			a[0]=a[1];
			a[1]=temp;
		}
		k--;
	}
	for(int i=0;i<3;i++)
	if(a[i]==true)
	cout<<i;
	return 0;
 } 
