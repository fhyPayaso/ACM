#include <iostream>
#include <cstring>   
#define MAXN 1100  
#define MOD 100000007  
using namespace std;    
int F[2][MAXN*MAXN];//使用滚动数组避免超限          
int main()  
{  
	int e = 0;  
	long long n,s,a,b;  
	int cnt = 0;  
    cin>>n>>s>>a>>b;  
    long long i,t,j;  
    
    memset(F,0,sizeof(F));  
    F[e][0]=1;  
    for(i=1;i<n;i++)  
    {  
        e=1-e;//实现数组的滚动  
        for(j=0;j<=i*(i+1)/2;j++)  
        {  
            if(i>j)  
                F[e][j]=F[1-e][j];  
            else  
                F[e][j]=(F[1-e][j]+F[1-e][j-i])%MOD;  
        }  
    }  

    for(i=0; i<=n*(n-1)/2; i++)  
    {  
        t = s - i*a + (n*(n-1)/2-i)*b;  
        if(t%n==0)  
           cnt = (cnt+F[e][i])%MOD;  
    }  
    cout<<cnt<<endl;
    return 0;  
}  
