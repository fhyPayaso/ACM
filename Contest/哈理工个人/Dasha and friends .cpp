#include<iostream>
using namespace std;
int main()
{
	int n,l,i,j,flag=0,temp;
	int a[1000],b[1000],ca[1000],cb[1000];
	cin>>n,l;
	for(i=0;i<n;i++) cin>>a[i];
	for(i=0;i<n;i++) cin>>b[i];
	
	for(i=0;i<n-1;i++)
	ca[i]=a[i+1]-a[i];
	ca[n-1]=l-(a[n-1]-a[0]);
	
	for(i=0;i<n-1;i++)
	cb[i]=b[i+1]-b[i];
	cb[n-1]=l-(b[n-1]-b[0]);
	
	for(i=0;i<n;i++)
	{
		while(ca[i]!=cb[i])
		{
			if(flag==n) break;
			temp=cb[n-1];
			for(j=n-1;j>0;j--)
				cb[j]=cb[j-1];
			cb[0]=temp;	
			flag++;
			i=0;
		}
	}
	
	if(i==n)
	cout<<"YES";
	else
	cout<<"NO"; 
	
	
	return 0;
}
