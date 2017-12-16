#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
	int a[505],b[505],c[505];
	int i;
	//TODO 1: 数组清零
	memset(c,0,sizeof(c));
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	//TODO 2：读入两个数字，分别存入字符串s1和s2中（此时没有倒序）
	string s1,s2;
	cin>>s1;
	cin>>s2;
	//TODO 3；比较s1，s2并交换，使s1比s2大，那么s1为被减数，s2为减数，若交换了输出个 - 号
	if (s1.length()<s2.length()  ||(s1.length()==s2.length() && s1<s2) )
	{
		string tmp;
		tmp=s1;
		s1=s2;
		s2=tmp;
		cout<<"-";
	}
	//TODO 4: 倒序读入数组，经过上部的交换后，a数组里的数一定比b数组的数大
	a[0]=s1.length();
	b[0]=s2.length();
	for (i=1; i<=a[0]; i++) a[i]=s1[a[0]-i]-'0';
	for (i=1; i<=b[0]; i++) b[i]=s2[b[00]-i]-'0';
	//减法
	c[0]=a[0]; 
	for (i=1; i<=c[0]; i++ )
	{
		c[i]+= (a[i]-b[i]);				//注意是+=，而不是=,因为c[i]里存的是c[i-1]的进位数
		if (c[i]<0)                     		
		{								//    12345     12345	   123 4 5     123 4 5    12 3 45     12 3 45     1 2 345     12345
			c[i]+=10;				    //  -   678 =>    678  =>	 6 7 8 =>    6 7 8 => 	 6 78  =>    6 78  =>     678  =>   678
			c[i+1]--;					//=   00000 	0000-3	   000-1 7	   000-4 7 	  00-1 67	  00-4 67	  0-1 667 	  11667
		}
	}
	while (c[ c[0] ] ==0 && c[0]>=2) c[0]--;      //567-500=067最后输出67 
	for (i=c[0]; i>=1; i--) cout<<c[i];
}
