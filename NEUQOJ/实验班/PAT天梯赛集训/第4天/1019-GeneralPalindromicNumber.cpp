#include<iostream>
using namespace std;
int main()
{
	int n,b;
	cin>>n>>b;
	int s[100];
	int k=0;
	while(n/b)
	{
		s[k++] = n % b;
		n /= b;
	}
	s[k++] = n % b;
	int i, flag = 1;
	for(i=0;i<k/2;i++)
	{
		if(s[i]!=s[k-i-1])
		{
			flag=0;
			break;
		}
	}
	if(flag)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	for(i=k-1; i>0; i--)
	cout<<s[i]<<" ";
	cout<<s[i];

	return 0;
}
