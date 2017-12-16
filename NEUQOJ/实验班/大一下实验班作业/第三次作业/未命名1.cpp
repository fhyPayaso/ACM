#include<iostream>
#include<cmath>
using namespace std;
int a[10],flag[10],sum=0;
void judge()
{
    if(abs(a[0]-a[1])>1)
	if(abs(a[0]-a[3])>1)
	if(abs(a[0]-a[4])>1)
	if(abs(a[0]-a[5])>1)
	
	if(abs(a[1]-a[2])>1)
	if(abs(a[1]-a[4])>1)
	if(abs(a[1]-a[5])>1)
	if(abs(a[1]-a[6])>1)
	
	if(abs(a[2]-a[5])>1)
	if(abs(a[2]-a[6])>1)
	
	if(abs(a[3]-a[4])>1)
	if(abs(a[3]-a[7])>1)
	if(abs(a[3]-a[8])>1)
	
	if(abs(a[4]-a[5])>1)
	if(abs(a[4]-a[7])>1)
	if(abs(a[4]-a[8])>1)
	if(abs(a[4]-a[9])>1)
	
	if(abs(a[5]-a[6])>1)
	if(abs(a[5]-a[8])>1)
	if(abs(a[5]-a[9])>1)
	if(abs(a[6]-a[9])>1)
	
	if(abs(a[7]-a[8])>1)
	if(abs(a[8]-a[9])>1)

    sum++;
}
void dfs(int step)
{
    if(step==10)
    {
        judge();
    }
    else
    {
        for(int i=0;i<10;i++)
        {
            if(flag[i]==0)
            {
                a[step]=i;
                flag[i]=1;
                dfs(step+1);
                flag[i]=0;
            }
        }
    }
}
int main()
{
    dfs(0);
    cout<<sum<<endl;
    return 0;
 } 
