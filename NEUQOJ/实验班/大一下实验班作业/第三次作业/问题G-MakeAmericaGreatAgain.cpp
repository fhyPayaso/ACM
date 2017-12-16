#include<iostream>
#include<cstring>
using namespace std;
int sum=0;
int mov[2][4]={1,-1,0,0,0,0,1,-1};
int flag[15][15];				
char b[30]=" MAKEAMERICAGREATAGAIN";
char a[15][15]={
	"            ",	
	" MAKEAMERICA",
	" AKEAMERICAG", 
	" KEAMERICAGR",
	" EAMERICAGRE",
	" AMERICAGREA",
	" MERICAGREAT",
	" ERICAGREATA",
	" RICAGREATAG",
	" ICAGREATAGA",
	" CAGREATAGAI",
	" AGREATAGAIN"};


void dfs(int w,int i,int j)
{
	if(i==11&&j==11)
	{
		sum++;
		return ;
	}
	int k;
	for(k=0;k<4;k++)
	{
		if(b[w]==a[i][j])
		{
			flag[i][j]=1;
			int ni=i+mov[0][k];
			int nj=j+mov[1][k];
			if(ni>0&&ni<12&&nj>0&&nj<12&&flag[ni][nj]==0)
			dfs(w+1,ni,nj);
			flag[ni][nj]=0;
		}
	}
}

int main()
{
	memset(flag,0,sizeof(flag));
	dfs(1,1,1);
	cout<<sum<<endl;
	return 0;
}
