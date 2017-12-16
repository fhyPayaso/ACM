#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[50];
	while(cin>>a)
	{
		int t=0,i;
		int l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]=='p')
			break;
			t++;
		}
		if(t==l)
		cout<<"You should wait"<<endl;
		else
		{
			t++;
			for(i=t;i<l;i++)
			{
				if('a'<=a[i]&&a[i]<='z')
				{
					if(a[i]=='p'){}
					else
					break;
				}
				t++;
			}
			if(t==l)
			cout<<"You should wait"<<endl;
			else if(a[t]!='y')
			cout<<"You should wait"<<endl;
			else
			{
				t++;
				for(i=t;i<l;i++)
				{
					if('a'<=a[i]&&a[i]<='z')
					break;
					t++;		
				}
				if(t==l)
				cout<<"You should wait"<<endl;
				else if(a[t]!='d')
				cout<<"You should wait"<<endl;
				else
				cout<<"Her name is pyd"<<endl;
			}
		}
	}
	return 0;
}

