#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
	int a[505],b[505],c[505];                       //两个数组a,b分别存两个数字，c数组存的是a+b之和,即答案 
	int i;
	//TODO 1: 数组清零，运用cstring里的memset函数  
								//memset(数组名 , 0或者 -1 , 从想要赋值为0或-1的长度(一般为数组的整个长度)) 
	memset(c,0,sizeof(c));
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	string s;
	//TODO 2：字符串读入并将其存进数组中 
	cin>>s;                                    		//一个临时的字符串用来存储读入的字符串 
	a[0]=s.length();								//a[0]存储的是字符串a的长度 
	for (i=1; i<=a[0]; i++) a[i]=s[a[0]-i]-'0';		//将刚刚读入的字符串s倒序存进数组a中 
	cin>>s;														
	b[0]=s.length();
	for (i=1; i<=b[0]; i++) b[i]=s[b[00]-i]-'0';
	//TODO 3: 加法运算 
	c[0]=max(a[0],b[0]);
	for (i=1; i<=c[0]; i++ )                
	{
		c[i]+=a[i]+b[i];							//注意是+=，而不是=,因为c[i]里存的是c[i-1]的进位数 
		if (c[i]>=10)                     			//    12345     12345	   12345     12345    12345    12345
		{											//  +   678 =>    678  =>	 678 =>    678 => 	678 =>   678
			c[i]=c[i]-10;							//=   00000 	00013	   00123	 01023	  03023	   13023
			c[i+1]=c[i+1]+1;
		}
	}
	if (c[ c[0]+1 ]!=0) c[0]++;								
	for (i=c[0]; i>=1; i--) cout<<c[i];			   //倒序输出 
	return 0;
}
