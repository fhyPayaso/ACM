#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		break;
		
		queue<int> s;
		int flag=0;
		
		for(int i=1;i<=n;i++)
		s.push(i);
		
		cout<<"Discarded cards:";
		while(s.size()>=2)
		{
			if(flag==0)
			{
				cout<<" "<<s.front();
				flag=1;
			}
			else
				cout<<", "<<s.front();
			s.pop();
			int t=s.front();
			s.push(t);
			s.pop();
		}
		cout<<endl<<"Remaining card: "<<s.front()<<endl;
	}
	return 0;
 } 
