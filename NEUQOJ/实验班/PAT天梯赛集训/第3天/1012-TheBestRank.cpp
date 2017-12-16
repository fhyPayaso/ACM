#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct s
{
	string num;
	int com,math,eng,avr;
};
bool cmp1(s a,s b) { return a.avr>b.avr;  }
bool cmp2(s a,s b) { return a.com>b.com;  }
bool cmp3(s a,s b) { return a.math>b.math;}
bool cmp4(s a,s b) { return a.eng>b.eng;  }

int main()
{
	int n,m;
	s stu[2005];
	string need;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>stu[i].num>>stu[i].com>>stu[i].math>>stu[i].eng;
		stu[i].avr=(stu[i].com+stu[i].math+stu[i].eng)/3;
	}
	
	
	for(int i=1;i<=m;i++)
	{
		cin>>need;
		int r1,r2,r3,r4,flag=0;
		char ke;
		sort(stu+1,stu+n+1,cmp1);
		for(int j=1;j<=n;j++)
		{
			if(need==stu[j].num)
			{
				r1=j;
				flag=1;
			}
		}
		if(flag==0)
		{
			cout<<"N/A"<<endl;
			continue;
		}
		sort(stu+1,stu+n+1,cmp2);
		for(int j=1;j<=n;j++)
		{
			if(need==stu[j].num)
			r2=j;
		}
		
		sort(stu+1,stu+n+1,cmp3);
		for(int j=1;j<=n;j++)
		{
			if(need==stu[j].num)
			r3=j;
		}
		
		sort(stu+1,stu+n+1,cmp4);
		for(int j=1;j<=n;j++)
		{
			if(need==stu[j].num)
			r4=j;
		}
		
		if(r1<=r2&&r1<=r3&&r1<=r4) cout<<r1<<" "<<'A'<<endl;
		else if(r2<=r1&&r2<=r3&&r2<=r4) cout<<r2<<" "<<'C'<<endl;
		else if(r3<=r1&&r3<=r2&&r3<=r4) cout<<r3<<" "<<'M'<<endl;
		else if(r4<=r1&&r4<=r2&&r4<=r3) cout<<r4<<" "<<'E'<<endl;
	}
	
	return 0;
}
