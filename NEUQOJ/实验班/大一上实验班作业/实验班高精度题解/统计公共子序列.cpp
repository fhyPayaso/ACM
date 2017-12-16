#include <iostream>
#include <cstring>
using namespace std;
const int maxn=8;
const int base=1000000000;
struct bign
{
    int a[maxn];
    bign()
    {
        memset(a,0,sizeof(a));
    }
 
    bign operator = (int num)
    {
        int i=0;
        while (num>0)
        {
            ++i;
            a[i]=num%base;
            num=num/base;
        }
    }
 
    bign operator = (const bign& b)
    {
        for (int i=1; i<=6; i++) a[i]=b.a[i];
    }
 
    bign operator + (const bign & b)  const
    {
        bign c;
        int x=0;
        int i,j;
        for ( i=1; i<=6 ; i++)
        {
            c.a[i]+=a[i]+b.a[i];
            c.a[i+1]=c.a[i]/base;
            c.a[i]%=base;
        }
        return c;
    }
 
    bign operator - (const bign & b) const
    {
        bign c;
        for (int i=1; i<=6; i++)
        {
            c.a[i]+=(a[i]-b.a[i]);
            if ( c.a[i]<0 )
            {
                c.a[i+1]--;
                c.a[i]+=base;
            }
        }
        return c;
    }
 
    bign operator -= (const bign & b)
    {
        bign c=*this;
        *this=(c-b);
    }
    bign operator += (const bign & b)
    {
        bign c=*this;
        *this=(c+b);
    }
 
    void print()
    {
        int i=6;
        while( i>1 && !a[ i ] ) i--;
        printf("%d",a[i]);
        for ( i=i-1; i>=1; i--) printf("%09d",a[i]);
        printf("\n");
    }
} f[151][151][151];
int main()
{
    //freopen("data.txt","r",stdin);
    char a[151],b[151],c[151];
    int n,i,j,k;
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    for (i=1;i<=n;i++) cin>>b[i];
    for (i=1;i<=n;i++) cin>>c[i];
     
    for (i=0; i<=n; i++)
        for (j=0; j<=n; j++)
        {
            f[0][i][j].a[1]=1;
            f[i][j][0].a[1]=1;
            f[i][0][j].a[1]=1;
        }
 
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            for (k=1; k<=n; k++)
            {
                if (a[i]==b[j] && a[i]==c[k])
                {
                    f[i][j][k]=f[i-1][j-1][k-1]+f[i-1][j-1][k-1];
                    int ii=i-1;
                    while ( ii>0 && a[ii]!=a[i] ) ii--;
                    int jj=j-1;
                    while ( jj>0 && b[jj]!=b[j] ) jj--;
                    int kk=k-1;
                    while ( kk>0 && c[kk]!=c[k] ) kk--;
                    if (ii>0 && jj>0 && kk>0 ) f[i][j][k]-=f[ii-1][jj-1][kk-1];
                }
                else
                    f[i][j][k]=f[i-1][j-1][k-1]+f[i-1][j][k]+f[i][j-1][k]+f[i][j][k-1]-f[i-1][j-1][k]-f[i-1][j][k-1]-f[i][j-1][k-1];
            }
    f[n][n][n]-=f[0][0][0];
    f[n][n][n].print();
}
 
