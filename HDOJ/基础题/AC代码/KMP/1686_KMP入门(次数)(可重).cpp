#include<iostream>
#include<string>
#include<cstring>
using namespace std;
typedef long long ll;
const ll maxn=1000010;
ll nex[maxn];
string a,b;

void getnext()
{
	int i=0,k=-1;
	int lb=b.size();
	nex[0]=-1;
	
	while(i<lb)
	{
		if(k==-1 || b[i]==b[k])
		{
			i++;
			k++;
			nex[i]=k;
		}
		else
			k=nex[k];
	}
	
	return ;
}

int kmp()
{
	getnext();
	
	int la=a.size();
	int lb=b.size();
	int i=0,j=0,ans=0;
	
	while(i<la)
	{
		
		if(j==-1||a[i]==b[j])
		{
			i++;
			j++;
			
			if(j==lb)	ans++;	//完成一次匹配结果直接加一,nex数组自动向前寻找匹配位置 
		}
		else
			j=nex[j];
	}
	return ans;
}

int main()
{
	
	std::ios::sync_with_stdio(false);//卡IO 
	//freopen("in.txt","r",stdin);
	int ti;
	cin>>ti;
	while(ti--)
	{
		cin>>b>>a;
		memset(nex,0,sizeof(nex));
		cout<<kmp()<<endl;		
	}
	return 0; 
}
