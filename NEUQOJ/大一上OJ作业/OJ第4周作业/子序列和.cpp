#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float n,m,i;
	float s=0;
	cin>>n>>m;
	for( i=n;i<=m;i++)
	s+=1/(i*i);
	cout<<setiosflags(ios::fixed)<<setprecision(5)<<s<<endl;
	return 0;
 } 
