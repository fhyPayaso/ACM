#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	//freopen("in.txt","r",stdin);
	int t,n,x,y;
	string ans1,ans2;
	cin>>t;
	while(t--)
	{
		cin>>n>>x>>y;
		cin>>ans1>>ans2;
		int num=0;
		//int wa1=n-x,wa2=n-y;
		for(int i=0;i<n;i++)
		{
			if(ans1[i]==ans2[i])
			num++;
		}
		
		int dif=n-num;//两者不同的数目 
		int flag=0;
		//令x错的最少，即X Y相同的都是对的
		//若num>=y ,x至少错num-y；
		//若num<y, x至少错y-num;
		if(dif<y) 
		{
			//若不同的全为Y对X错：dif之外的X Y相同，即x至少对y-dif 
			if(x>=y-dif&&x<=n-abs(y-num))  flag=1;
		}
		else
		{
			if(x<=n-abs(y-num))				flag=1;
		}
		
		
		if(flag==1)
		cout<<"Not lying"<<endl;
		else
		cout<<"Lying"<<endl;
				
	}
	return 0;
}
