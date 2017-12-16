//概率题，推公式
#include<cstdio>
using namespace std;
int n,T;
double ans;

int main(){
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        ans=(n+1.0)/(3*n+1);
        for(int i=1;i<=n;++i)
			ans=ans*i/(i+n);
        printf("%.9f\n",ans);
		}
	}
