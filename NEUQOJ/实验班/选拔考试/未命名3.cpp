#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,i;
	int a[1005],b[1005],temp[1005],x=0;
	cin>>n>>k;
	int cot1=0,cot2=0,sum=0;
	
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<=n;i++) cin>>b[i];
	
	for(i=1;i<=n;i++)
	{
		if(a[i]>b[i])
		{
			cot2++;
			sum+=b[i];
			temp[x]=a[i]-b[i];
			x++;
		}
		else
		{
			cot1++;
			sum+=a[i];
		}
	}
	x--;
	sort(temp,temp+x+1);
	int y=0;
	while(cot1<k)
	{
		sum+=temp[y];
		cot1++;
		y++;
	}
	cout<<sum<<endl;
	return 0;
}
