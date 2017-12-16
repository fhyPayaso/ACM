#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
bool able[30];
bool used[30];
char password[20];
int l;
void solve(int cur,int yuan,int fu,int start)
{
	if(cur==l)
	{
		if(yuan<1||fu<2)
		return;
		password[cur]=' ';
		password[cur+1]='\0';
		printf("%s\n",password);
		return;
	}
	for(int i=start;i<26;++i)
	{
		if(able[i]&&!used[i])
		{
			char chr=i+'a'-1;
			password[cur]=chr;
			used[i]=true;
			switch(chr)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					solve(cur+1,yuan+1,fu,i);
					break;
				default:
					solve(cur+1,yuan,fu+1,i);
			}
			used[i]=false;
		}		
	}
}
int main()
{
	char str[30];
	int sl;
	while(scanf("%d%d%s",&l,&sl,str)==3)
	{
		memset(able,false,sizeof(able));
		memset(used,false,sizeof(used));
		for(int i=0;i<sl;++i)
			able[str[i]-'a'+1]=true;
		solve(0,0,0,1);	
	}
	return 0;
}






