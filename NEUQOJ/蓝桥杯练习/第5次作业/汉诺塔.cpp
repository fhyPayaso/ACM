#include<iostream>
using namespace std;
void mmm(char x,char y)
{
	cout<<x<<"---"<<y<<endl;	
}
void haha(int nn,char aa,char bb,char cc)
{
	if(nn==1) mmm(aa,cc);
	else
	{
		haha(nn-1,aa,cc,bb);
		mmm(aa,cc);
		haha(nn-1,bb,aa,cc);
	}
}
int main()
{
	int n;
	char a='A',b='B',c='C';	
	cin>>n;
	haha(n,a,b,c);
	return 0;
} 
