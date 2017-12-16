#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[10000];
	while(cin>>a)
	{
		int l=strlen(a),x=0,i;
		for(i=0;i<l;i++)
		{
			if(a[i]=='W')
			{
				x++;
				break;
			}
		}
		for(i=0;i<l;i++)
		{
			if(a[i]=='P')
			{
				x++;
				break;
			}
		}
		for(i=0;i<l;i++)
		{
			if(a[i]=='d')
			{
				x++;
				break;
			}
		}
		for(i=0;i<l;i++)
		{
			if(a[i]=='p')
			{
				x++;
				break;
			}
		}
		if     (x==4) cout<<"A"<<endl;
		else if(x==3) cout<<"B"<<endl;
		else if(x==2) cout<<"C"<<endl;
		else if(x==1) cout<<"D"<<endl;
		else 		  cout<<"S"<<endl;
	}
	return 0;
}
