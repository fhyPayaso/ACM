#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int tree[1000],f[10],res[1000],order[10];
string temp,str;
int main()
{
	int deep,t;
	while(cin>>deep)
	{
		if(!deep) break;
		
		
		for(int i=1;i<=deep;i++)
		{
			cin>>temp;
			order[i]=temp[1]-'0';
		}
		
		int num=pow(2,deep);
		cin>>str;
		
		cin>>t;
		for(int j=1;j<=t;j++)
		{
			cin>>temp;
			
			for(int i=1;i<=deep;i++)
			f[i]=temp[order[i]-1]-'0';
			
			int k=1;
			for(int i=1;i<=deep;i++)
			{
				if(!f[i]) k*=2;
				else         k=k*2+1;
			}
			res[j]=str[k-num]-'0';
		}
		int v=1;
		cout<<"S-Tree #"<<v++<<":"<<endl;
		for(int i=1;i<=t;i++)
		cout<<res[i];
		cout<<endl<<endl;
	}
	return 0;
 } 
