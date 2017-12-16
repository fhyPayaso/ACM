#include <iostream>
#include<cstring>
using namespace std;
typedef long long ll;
const ll maxn=1000005;
int nex[maxn],a[maxn],b[maxn];
int n,m;
void getnext()
{
	int i=0,k=-1;
	nex[0]=-1; 
	while(i<m)
	{
		if(k==-1 || b[i] == b[k])
		{
			i++;
			k++;
			nex[i]=k;
		}
		else
		k=nex[k];
	}
	
//	for(int j=0;j<m;j++)
//	cout<<next[j]<<" ";
	return ;
}

int kmp()
{
	int i=0,j=0;
	
	while(i<n&&j<m)
	{
		if(j==-1 || a[i]==b[j])  
		{
			i++;
			j++;
		}
		else				
		j=nex[j];
	}
	if(j==m)
		return i-j+1;
	else
		return -1;
}

int main ()
{
    //freopen("in.txt","r",stdin);
    
	int ti;
	cin>>ti;
	while(ti--)
	{
		
		cin>>n>>m;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(nex,0,sizeof(nex));
		
   	 	for(int i=0;i<n;i++)	cin>>a[i];
		for(int i=0;i<m;i++)	cin>>b[i];
    	getnext();
		int ans=kmp();
		cout<<ans<<endl;
	}
    return 0;
}
