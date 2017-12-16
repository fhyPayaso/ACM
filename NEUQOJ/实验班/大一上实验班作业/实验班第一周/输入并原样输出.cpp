#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	char str[100];
	cin>>str;
	n=strlen(str);
	for(int i=0;i<n;i++)
		cout<<str[i];
	return 0;
}
