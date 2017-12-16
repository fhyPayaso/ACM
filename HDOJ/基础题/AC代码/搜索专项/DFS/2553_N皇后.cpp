#include<iostream>
#include<cmath>
using namespace std;
int n,a[15],ans,x[15];


void dfs(int step)
{
    if(step==n+1)
    {
        ans++;
        return ;
    }
    
    for(int i=1;i<=n;i++)
    {
        a[step]=i;
        
        int flag=1;
        for(int j=1;j<step;j++)
            if(abs(step-j)==abs(a[step]-a[j])||a[step]==a[j])
            {
                flag=0;
                break;
            } 
        if(flag)    dfs(step+1);
        
    }    
}

void init()//不打表超时 
{
	for(n=1;n<=10;n++)
	{
		ans=0;
        dfs(1);
		x[n]=ans;
	}
}


int main()
{
    std::ios::sync_with_stdio(false);
    //freopen("in.txt","r",stdin);
    
	init();
	while(cin>>n)
    {
        if(!n) break;
        cout<<x[n]<<endl;
    }
    
    return 0;
 } 
