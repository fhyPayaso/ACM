#include<iostream>
using namespace std;
struct student
{
	int num;
	int mark[3];
	int sum;
};
struct student stu[301];
int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		stu[i].num=i+1;
		for(j=0;j<3;j++)
		cin>>stu[i].mark[j];
		stu[i].sum=stu[i].mark[0]+
				   stu[i].mark[1]+
				   stu[i].mark[2];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(stu[j].sum<stu[j+1].sum)
			{
				stu[n]=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=stu[n];
			}
			if(stu[j].sum==stu[j+1].sum)
			{
				if(stu[j].mark[0]<stu[j+1].mark[0])
				{
					stu[n]=stu[j];
					stu[j]=stu[j+1];
					stu[j+1]=stu[n];
				}
			}
		}
	}
	for(i=0;i<5;i++)
	cout<<stu[i].num<<" "<<stu[i].sum<<endl;	
	return 0;
} 
