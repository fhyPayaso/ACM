#include<iostream>
#include<cstring>
#include<string>
using namespace std;
typedef long long ll;
const ll maxn=1000000+10;

int nex[maxn],n;
string str;

void getnext()
{
	memset(nex,0,sizeof(nex));
	
	int i=0,k=-1;
	nex[0]=-1;
	
	while(i<n)
	{
		if(k==-1||str[i]==str[k])
		{
			k++;
			i++;
			nex[i]=k;
		}
		else
			k=nex[k];
	}
	return ;
}

void kmp()
{
	getnext();
	for(int i=0;i<=n;i++)
	{
		if(nex[i]>0)
		{
			int j=i-nex[i];
			//如果能整除，说明周期长度为j出现次数为i/j
			//（1）假设字符串长度为2a，前后缀重叠最大长度为a
			//	   则可看做这个字符串由重叠部分循环两次生成
			//（2）若长度为3a，最大重叠长度为2a，即a1+a2=a2+a3得a1=a3，
			//     由（1）知a1=a2 ，所以a1=a2=a3,该串可看做a循环三次生成 
			//（3）推理可知，若长度为 na,最大重叠长度为(n-1)a,该串可看做a循环n次生成
			if(i%j==0) 
				cout<<i<<" "<<i/j<<endl; 
		}
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	//freopen("in.txt","r",stdin);
	
	int ti=1;
	while(cin>>n)
	{
		if(!n) break;
		cin>>str;
		cout<<"Test case #"<<ti++<<endl;
		kmp();
		cout<<endl;
	}
	return 0;
}

