#include<cmath>
#include<iostream>
#include <cstdio>

using namespace std;
const int INF=1<<30;
const int MAXN=510;
typedef long long ll;
int n,m;
const ll mod=1000000007;
ll f[510],A[2][MAXN][MAXN],B[2][MAXN][MAXN],t1,t2;
ll k;

void GETB(){
    int nex=t2^1;
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
            ll tem=0;
			for(int t=0;t<n;t++){
				tem=(tem+(B[t2][i][t]*A[t1][t][j]))%mod;
			}
            B[nex][i][j]=tem;
		}
	}
    t2=nex;
}

void GETA(){
    int nex=t1^1;
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
            ll tem=0;
			for(int t=0;t<n;t++){
				tem=(tem+(A[t1][i][t]*A[t1][t][j]))%mod;
			}
            A[nex][i][j]=tem;
		}
	}
	t1=nex;
}
void testA(){
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
            cout<<A[t1][i][j]<<"  ";
		}
		cout<<endl;
	}
}

void testB(){
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
            cout<<B[t2][i][j]<<"  ";
		}
		cout<<endl;
	}
}

int main(){
	//freopen("in.txt","r",stdin);
	cin>>n>>k;
	k=k-n;
	t1=0,t2=0;
	for(int i=0;i<n;i++){
        cin>>f[n-i-1];
	}
	for(int i=0;i<n;i++){
		cin>>A[t1][0][i];
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<n;j++){
			A[t1][i][j]=0;
		}
		A[t1][i][i-1]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			B[t2][i][j]=0;
		}
		B[t2][i][i]=1;
	}
	while(k){
		if(k&1)GETB();
		GETA();
		k/=2;
	}
	ll ans=0;
	for(int i=0;i<n;i++){
        ans=(ans+B[t2][0][i]*f[i])%mod;
	}
	cout<<ans<<endl;
	return 0;
}
