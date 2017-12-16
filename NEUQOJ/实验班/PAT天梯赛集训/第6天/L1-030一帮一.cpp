#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct s
{
	int sex;
	string name;
	int rank;
};
int main()
{
	
	s stu[55];
	int flag[55];
	memset(flag,0,sizeof(flag));
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>stu[i].sex>>stu[i].name;
		stu[i].rank=i;
	}
	int left=1,right=n;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=1;j--)
		{
			if(stu[i].sex!=stu[j].sex&&flag[i]==0&&flag[j]==0)
			{
				cout<<stu[i].name<<" "<<stu[j].name<<endl;
				flag[i]=1;
				flag[j]=1;
				break;
			}
		}	
	}
	
	return 0;
}
