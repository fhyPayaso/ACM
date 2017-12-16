#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,m,i,t2;
	string t1;
	while(cin>>t>>m)
	{
		for(i=0;i<t;i++)
		{
			cin>>t1>>t2;
			if(t1=="AND")
				m=m&t2;
			else if(t1=="OR")
				m=m|t2;
			else if(t1=="XOR")
				m=m^t2;
		}
		cout<<m<<endl;
	}
	return 0;
 } 
