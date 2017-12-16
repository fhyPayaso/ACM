#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string.h>
using namespace std;
int main()
{
	int n;
	char c;
	cin>>n;
	c=getchar();
	while(n--)
	{
		double arr[1005];
		memset(arr,0,sizeof(arr));
		int i=0;
		while((c=getchar())!=EOF&&c!='\n')
		{
			if(c>='0'&&c<='9')
			{
				double tmp=0;
				int eps=1;
				bool flag=false;
				while(c!=' ')
				{
					if(flag)
					eps*=10;
					if(c=='.')
						flag=true;
					else
						tmp=tmp*10+c-'0';
					c=getchar();
				}
				arr[i++]=tmp/eps;
			}
			else if(c!=' ')
			{
				i--;
//                cout<<arr[i]<<' '<<arr[i-1]<<endl;
				if(c=='+')
					arr[i-1]+=arr[i];
				else if(c=='-')
					arr[i-1]-=arr[i];
				else if(c=='*')
					arr[i-1]*=arr[i];
				else if(c=='/')
					arr[i-1]/=arr[i];
			}
		}
		cout<<setprecision(2)<<fixed<<arr[0]<<endl;
	}
	return 0;
}
