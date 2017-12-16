#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	string num[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int n,m,a[100],x=0;
	cin>>n;
	if(n<0)
	{
		cout<<"fu ";
		n=-n;
	}
	
	while(n!=0)
	{
		x++;
		a[x]=n%10;
		n/=10;
	}
	
	for(int i=x;i>1;i--)
	cout<<num[a[i]]<<" ";
	cout<<num[a[1]]<<endl;
	
	return 0;
 } 
