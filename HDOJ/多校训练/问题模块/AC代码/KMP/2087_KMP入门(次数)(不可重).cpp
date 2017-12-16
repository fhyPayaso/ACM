#include<iostream>
#include<cstring>
#include<string>
using namespace std;
typedef long long ll;
const ll maxn=1010;
int nex[maxn],ans;
string a,b; 

void getnext()
{
	int la=a.size();
	int lb=b.size();
	int i=0,k=-1;
	nex[0]=-1;
	
	while(i<lb)
	{
		if(k==-1||b[k]==b[i])
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
	ans=0;
	int la=a.size();
	int lb=b.size();
	int i=0,j=0;
	
	while(i<la)
	{
		if(j==-1||a[i]==b[j])
		{
			i++;
			j++;
			
			if(j==lb)
			{
				ans++;
				j=0;
			}
		}
		else
			j=nex[j]; 
	}
	return ans;
}
int main()
{
	freopen("in.txt","r",stdin);
	while(cin>>a)
	{
		if(a=="#") break;
		cin>>b;
		cout<<kmp()<<endl;
	}
	return 0;
}
