#include<iostream>
using namespace std;
int main()
{
	int l;
	cin>>l;
	for(int i=0; i<l; i++)
	{
		int a,b;
		cin>>a>>b;
		if((a%2==1&&(a>=3&&a<=39))&&(b>=1&&b<=20))
		{

			int s=a/2;
			int t=a;
			for(int k=0; k<s; k++)
			{
				for(int q=0; q<k; q++)
					cout<<" ";
				cout<<"X";
				for(int q=0; q<t-2; q++)
					cout<<" ";
				t-=2;
				cout<<"X"<<endl;
			}
			for(int k=0; k<s; k++)
				cout<<" ";
			cout<<"X"<<endl;
			t=1;
			for(int k=s; k>0; k--)
			{
				for(int q=0; q<k-1; q++)
					cout<<" ";
				cout<<"X";
				for(int q=0; q<t; q++)
					cout<<" ";
				t+=2;
				cout<<"X"<<endl;
			}
			for(int j=1; j<b; j++)
			{
				int s=a/2;
				int t=a;
				for(int k=1; k<s; k++)
				{
					for(int q=0; q<k; q++)
						cout<<" ";
					cout<<"X";
					for(int q=0; q<t-4; q++)
						cout<<" ";
					t-=2;
					cout<<"X"<<endl;
				}
				for(int k=0; k<s; k++)
					cout<<" ";
				cout<<"X"<<endl;
				t=1;
				for(int k=s; k>0; k--)
				{
					for(int q=0; q<k-1; q++)
						cout<<" ";
					cout<<"X";
					for(int q=0; q<t; q++)
						cout<<" ";
					t+=2;
					cout<<"X"<<endl;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
