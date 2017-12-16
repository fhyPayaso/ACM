#include<iostream>
#include<cstring> 
using namespace std;
int main()
{
	char a[25][1000];
	cin>>a[0];
	int n,i,j,k,cot;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cot=1,k=0;
		for(j=0;j<strlen(a[i-1]);j++) 
		{
			if(a[i-1][j]==a[i-1][j+1])
			cot++;
			else
			{
				a[i][k]=char(cot)+'0';
				k++;
				a[i][k]=a[i-1][j];
				k++;
				cot=1;
			}
		}	
	}
	cout<<a[n]<<endl;
	return 0;
}
