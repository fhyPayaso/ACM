#include<iostream>
using namespace std;
int main()
{
	int a[5],i,j,k;
	for(i=1;i<5;i++) cin>>a[i];
	
	for(i=1;i<=2;i++)
		for(j=i+1;j<=3;j++)
			for(k=j+1;k<=4;k++)
			{
				cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
				cout<<a[i]<<" "<<a[k]<<" "<<a[j]<<endl;
				cout<<a[j]<<" "<<a[i]<<" "<<a[k]<<endl;
				cout<<a[j]<<" "<<a[k]<<" "<<a[i]<<endl;
				cout<<a[k]<<" "<<a[i]<<" "<<a[j]<<endl;
				cout<<a[k]<<" "<<a[j]<<" "<<a[i]<<endl;
			}
	return 0;
}
