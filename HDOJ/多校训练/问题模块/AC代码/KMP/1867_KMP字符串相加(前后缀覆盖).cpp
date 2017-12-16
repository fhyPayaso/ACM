#include<iostream>
#include<cstring>
#include<string>
using namespace std;
typedef long long ll;
const ll maxn=100010;
int nex[maxn];


void getnext(const string &s)
{
	
	memset(nex,0,sizeof(nex));
	int i=0,k=-1,len=s.size();
	nex[0]=-1;
	while(i<len)
	{
		if(k==-1||s[k]==s[i])
		{
			k++;
			i++;
			nex[i]=k;
		}
		else
			k=nex[k];
	}
	
//	for(int i=0;i<len;i++) cout<<nex[i]<<" ";
//	cout<<endl;
	return ;
}

int kmp(const string &a,const string &b)
{
	getnext(b);
	int i=0,j=0;
	int la=a.size();
	int lb=b.size();
	
	while(i<la)
	{
		if(j==-1||a[i]==b[j])
		{
			i++;
			j++;
		}
		else
			j=nex[j];
	}
	return j;
}

int main()
{
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	string a,b;
	while(cin>>a>>b)
	{
		string ta=a,tb=b;
		int la=a.size(),lb=b.size();
		int pos1=kmp(a,b),pos2=kmp(b,a);
		
		for(int i=pos1;i<lb;i++) ta+=b[i];
		for(int i=pos2;i<la;i++) tb+=a[i];
		
		if(ta.size()!=tb.size())
			ta=ta.size()<tb.size()?ta:tb;
		else 
			ta=ta<tb?ta:tb;
		
		cout<<ta<<endl;
	}
	return 0;
}
