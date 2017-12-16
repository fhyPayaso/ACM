#include<iostream>
#include<algorithm>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
	char a[100];
	cin>>a;
	int l=sizeof(a);
	sort(a,a+l);
	cout<<a<<endl;
	return 0;
 } 
