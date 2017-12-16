#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int a[505],b[505],c[1010];
    int i,j;
  	//TODO 1: 数组清零 
    memset(c,0,sizeof(c));
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    //TODO 2: 倒序存进数组a,b 
	string s1,s2;
    cin>>s1;
    cin>>s2;
    a[0]=s1.length();
    b[0]=s2.length();
    for (i=1; i<=a[0]; i++) a[i]=s1[a[0]-i]-'0';
    for (i=1; i<=b[0]; i++) b[i]=s2[b[00]-i]-'0';
 	//TODO 3: 乘法 
    for (i=1; i<=a[0]; i++ )
    {								//	 b数组     	  1234
        for(j=1; j<=b[0]; j++)		//	 a数组  *       25 
        {							//	  	=         6170
            c[i+j-1]+=a[i]*b[j];    //               24680
            if (c[i+j-1]>=10)		//      =        30850
            {
                c[i+j]+=(c[i+j-1]/10);
                c[i+j-1]%=10;
            }
        }
    }
	c[0]=a[0]+b[0]-1;
    while (c[c[0]+1 ]!=0) c[0]++;
    for (i=c[0]; i>=1; i--) cout<<c[i];
}
