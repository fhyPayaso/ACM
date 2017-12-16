#include<iostream>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	int b[51],j=0,n;
	while(cin>>n) 
	{
		b[j]=n;
		j++;
	}
	for(int k=0;k<j;k++)
	{
		int a[20],i=0,x=b[k];
		b[k]=abs(b[k]);
		while(b[k]!=0)
		{
			a[i]=b[k]%2; 
			b[k]/=2;
			i++;
		}
		cout<<setw(11)<<x<<"-->";
		if(x<0) cout<<"-";
		else if(x==0) cout<<"0";
		for(int l=i-1;l>=0;l--)
		cout<<a[l];
		
		cout<<endl;
	}
	return 0;
} 
