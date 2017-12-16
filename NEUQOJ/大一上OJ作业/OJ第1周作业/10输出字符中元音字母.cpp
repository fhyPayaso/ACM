#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a,b;
	cin>>a;
	int l=a.size();
	for(int i=0;i<l;i++)
	{
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
	b=b+a[i];
	}
	cout<<b<<endl;
	return 0;	
}
