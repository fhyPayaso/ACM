#include<iostream>
#include<cstring>
using namespace std;
const int maxn=100000+5;
char a[maxn];
struct list{ int next; } node[maxn];
int main()
{
	while(scanf("%s",a+1)==1)
	{
		int len=strlen(a+1);
		int cur=0,last=0;
		node[0].next=0;
		for(int i=1;i<=len;i++)
		{
			if(a[i]=='[')
				cur=0;
			else if(a[i]==']')
				cur=last;
			else
			{
				node[i].next=node[cur].next;
				node[cur].next=i;
				if(cur==last) last=i;
				cur=i;
			}		
		}
		
		for(int i=node[0].next;i!=0;i=node[i].next)
			if(a[i]!='['&&a[i]!=']') 
				cout<<a[i];
		cout<<endl;
		
	}
	return 0;
 } 
