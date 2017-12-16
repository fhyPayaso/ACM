#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=1000+5;
int c[maxn],w[105],f[105][maxn],num,val;
void dp()
{
		for(int i=1;i<=num;i++)
		{
			for(int v=0;v<c[i];v++)
				f[i][v]=f[i-1][v];	
			for(int v=c[i];v<=val;v++)
				f[i][v]=max(f[i-1][v],f[i-1][v-c[i]]+w[i];	
		}	
}
int main()
{
	
	while(cin>>val>>num)
	{
		memset(c,0,sizeof(c));
		memset(w,0,sizeof(w));
		memset(f,0,sizeof(f));
		for(int i=1;i<=num;i++)
		cin>>c[i]>>w[i];
		dp();
		cout<<f[num][val]<<endl;
	}
	return 0;
 } 
