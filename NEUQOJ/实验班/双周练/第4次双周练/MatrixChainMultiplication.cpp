#include<iostream>
#include<string>
#include<stack>
using namespace std;
int n,sum;
struct jv
{
	char name;
	int x,y;
}jz[30];

int cha(char a)
{
	for(int i=1;i<=n;i++)
		if(jz[i].name==a)
		return i;
}
int main()
{
	string temp;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>jz[i].name;
		cin>>jz[i].x>>jz[i].y;
	}
	
	while(cin>>temp)
	{
		if(temp.size()==1)
			cout<<0<<endl;
		else
		{
			stack <jv>  s;
			sum=0;
			int flag=0;
			for(int i=0;i<temp.size();i++)
			{
				if('A'<=temp[i]&&temp[i]<='Z')
				s.push(jz[cha(temp[i])]);
				else if(temp[i]==')')
				{	
					if(!s.empty())
					{
						jv t2=s.top(); s.pop();
						jv t1=s.top(); s.pop();
						int num;
						if(t1.y!=t2.x)
						{
							flag=1;
							break;
						}
						else
						{
							num=t1.x*t1.y*t2.y;
							sum+=num;
							t1.y=t2.y;
							s.push(t1);
						}
					}
				}
			}
			if(flag)
			cout<<"error"<<endl;
			else
			cout<<sum<<endl;	
		}
	}

	return 0;
}

