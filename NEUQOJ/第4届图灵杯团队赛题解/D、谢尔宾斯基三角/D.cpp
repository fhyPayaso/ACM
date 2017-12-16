//递归
#include <cstdio>
#include <cstring>
#define N 2050
using namespace std;
int n;
char s[N/2][N];

void print(int x,int y,int d){
    int offset=1<<(d-1);
    if(d==1){
        s[x][y]=s[x+1][y-1]='/';
        s[x][y+1]=s[x+1][y+2]='\\';
        s[x+1][y]=s[x+1][y+1]='_';
        return ;
		}
    print(x,y,d-1);
    print(x+offset, y-offset, d-1);
    print(x+offset, y+offset, d-1);
	}

int main(){
    while(scanf("%d",&n) && n){
        int i,j,k;
        for(i=1;i<=(1<<n);i++)
            for(j=1;j<=(1<<(n+1));j++)
                s[i][j]=' ';
        print(1,(1<<n),n);
        k=(1<<n)+1;
        for(i=1;i<=(1<<n);i++,k++){
            for(j=1;j<=k;j++)
                putchar(s[i][j]);
            printf("\n");
			}
        printf("\n");
		}
    return 0;
	}
