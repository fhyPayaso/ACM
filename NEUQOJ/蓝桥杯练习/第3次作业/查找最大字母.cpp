#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[105];
	while(gets(a))
	{
		char max=0;
		int l=strlen(a),i;
		for(i=0;i<l;i++)
		if(max<a[i])
		max=a[i];
		for(i=0;i<l;i++)
		{
			cout<<a[i];
			if(max==a[i])
			cout<<"(max)";	
		}
		cout<<endl;
	}
	return 0;
} 
