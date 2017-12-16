#include<iostream>
#include<cmath> 
using namespace std;
void f(int n,int h)
{
	
	if(n==1)
	{
		for(int i=1;i<=h;i++)
		{
			for(int j=1;j<=h-i;j++)
				cout<<" ";
			if(i%2)
			cout<<"/\\";
			else cout<<"/__\\";
			
			cout<<endl;	
		}
	}
	else
	{
		for(int i=1;i<=h;i++)
		{
			if(i<=h/2)
			for(int j=1;j<=h/2;j++)
			cout<<" ";
			f(n-1,h/2);
			
			cout<<endl;	
		}	
	} 	
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(!n) break;
		f(n,pow(2,n));
	}
	return 0;
} 
