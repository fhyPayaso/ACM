#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n];		
		for(int i=0;i<n;i++)
		cin>>a[i];
		if(a[n-1]==0)
		cout<<"UP"<<endl;
		else if(a[n-1]==15)
		cout<<"DOWN"<<endl;
		else if(n==1)
		cout<<-1<<endl;
		else if(a[n-1]>a[n-2])
		cout<<"UP"<<endl;
		else if(a[n-1]<a[n-2])
		cout<<"DOWN"<<endl;
		else if(a[n-1]==15)
		cout<<"DOWN"<<endl;
	}
	return 0;
} 
