#include<iostream>
#include<cmath> 
using namespace std;
string s1,s2;
int l1,l2;
void shuru()
{
	cin>>s1>>s2;
}
void jisuan()
{
	l1=s1.length();
	l2=s2.length();
}
int main()
{
	
	shuru();
	jisuan();
	int m=max(l1,l2);
	if(s1==s2) printf("-1");
	else printf("%d",m);

	return 0;
}
