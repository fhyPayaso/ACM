#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack <int> s;
	int n,temp;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		s.push(temp);
	}
	cout<<"Mark.";
	while(!s.empty())
	{
		temp=s.top();
		cout<<temp;
		s.pop();
	}
	return 0;
}
