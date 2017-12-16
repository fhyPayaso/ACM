#include<iostream>
#include<string>
#include<cstring>
#define mod 1e6
using namespace std;
class bign
{
	int s[1000];
	bign()
	{
		memset(s,0,sizeof(s));
		s[0]=0;
	}
	
	int operator < (const bign &x)
	{
		if(s[0]<x.s[0])       return 1;
		else if(s[0]>x.s[0])  return 0;
		for(int i=s[0;i>1;i--])
		{
			if(s[i]<x.s[i])   return 1;
			if(s[i]>x.s[i])   return 0;
		}
		return -1;
	}
	
	
	
	bign & operator - (const bign &x)
	{
		for(int i=1;i<=x.s[0];i++)
		{
			s[i]-=x.s[i];
			if(s[i]<0)
			{
				s[i]+=mod;
				s[i+1]--;
			}
		}
		while(!s[s[0]]) s[0]--;
		return *this;
	}
	
	bign & operator * (const int num)
	{
		for(int i=1;i<s[0];i++) s[i]*=num;
		for(int i=1;i<s[0];i++)
		{
			s[i+1]+=(s[i]/mod); 
			s[i]%=mod;
		}
		while(s[s[0]+1]) s[0]++;
		return *this;
	}
	
	bign & operator / (int num)
	{
		int d=0;
		for(int i=s[0];i>=1;i--)
		{
			d=d*mod+s[i];
			s[i]=d/num;
			d=d%num;
		}
		while(s[s[0]+1]) s[0]--;
		return *this;
};
/*---------------------------------------------------*/
istream & operator >> (istream &in,bign &x)
{
	memset(x.s,0,sizeof(x.s));
	string str;
	cin>>str;
	x.s[0]=str.length();
	int i=0,k,j=1;
	while(j<x.s[0])
	{
		i++;k=1;
		for(j=6*i-5;j<6*i&&j<x.s[0];j++)
		{
			x.s[i]+=k*(str[x.s[0]-j]-'0');
			k*=10;
		}
	}
	while(!x.s[x.s[0]]) x.s[0]--;
	return in;
}
/*---------------------------------------------------*/
ostream & operator << (ostream &out,bign &x)
{
	while(!x.s[x.s[0]]) x.s[0]--;
	printf("%d",x.s[x.s[0]]) ;
	for(int i=x.s[0]-1;i>=1;i--)
	printf("%06d",x.s[i]);
	return out;
}
/*--------------------------------------------------*/
/*int gcd(int a,int b)  二进制GCD算法 
{
	int temp;
	if(a==b)           return a;
	if(a<b)            { temp=a;a=b;b=temp;} 
	if(b==0)           return a;
	if(a%2==0&&b%2==0) return 2*gcd(a>>1,b>>1);
	else if(a%2==0)    return gcd(a>>1,b);
	else if(b%2==0)    return gcd(a,b>>1);
	else               return gcd((a-b)>>1,b);
}*/
int main()
{
	bign a,b;
	while(cin>>a>>b)
	{
		int count=0;
		while(!(a.s[1]&1)&&!(b.s[1]&1))
		{ count++; a=a/2; b=b/2; }
		
		while(1)
		{
			while(!(a.s[1]&1)) a=a/2; //偶数变奇数 
			while(!(b.s[1]&1)) b=b/2; //偶数变奇数
			int judge=(b<a); 
			if(judge==-1) break; //相等 
			if(judge==1) a=a-b;  //a>b 
			else b=b-a;          //b>a
		}
		while(count--) b=b*2;
		cout<<b<<endl;
	}
	return 0;
}
 
