#include<iostream>
using namespace std;

int sum=0;
void dfs(int x,int hua,int jiu)
{
	if(hua>0) dfs(x-1,hua-1,jiu);
	if(jiu>0) dfs(x*2,hua,jiu-1);
	if(hua==0&&jiu==0&&x==1)
	sum++;
	return ;
}

int main()
{
	dfs(2,9,5);
	cout<<sum<<endl;
	return 0;
} 
