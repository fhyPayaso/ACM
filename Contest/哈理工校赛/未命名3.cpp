#include<iostream>
using namespace std;
int main()
{
	int n,m,i,sum,min;
	int a[1000];
	while(cin>>n)
	{
		sum=0;
		int max=-1;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
			if(min<a[i])
			max=a[i];
		}
		
		for(int all=1;all<n;all++)
		{
			int f=1; 
			while(f+all<=n)
			{
				int min=9999999;
				for(int j=f;j<=f+all;j++)
					if(min>a[j])
						min=a[j];
				if(max<(all+1)*min)
					max=(all+1)*min;
				f++;	
			}
		}
		cout<<max<<endl;
	}	
	return 0;
}
