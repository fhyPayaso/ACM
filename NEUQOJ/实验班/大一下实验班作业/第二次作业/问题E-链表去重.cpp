#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>
# define MAX 100005
using namespace std;
struct l
{
	int num;
	int nex;
}	list[MAX];

int main()
{
	bool flag[MAX];
	int adress1,n;
	int i,j;
	memset(flag,false,sizeof(flag));
	cin>>adress1>>n;
	
	for(i=1;i<=n;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		list[x].num=y;
		list[x].nex=z;
	}
	
	int now=adress1,next=adress1;
	int adress2=-1,now2;
	flag[abs(list[now].num)]=true;
	
	for(i=1;i<=n;i++)
	{
		next=list[now].nex;
		if(flag[abs(list[next].num)])
		{
			if(list[next].nex==-1)
				list[now].nex=-1;
			else
				list[now].nex=list[next].nex;
			
			list[next].nex=-1;
			if(adress2==-1)
			{
				adress2=next; 
				now2=adress2;
			}
			else
			{
				list[now2].nex=next;
				now2=next;
			}	
		}
		else
		{
			now=next;
			flag[abs(list[next].num)]=true;
		}	
	}
	
	while(adress1!=-1)
	{
		cout<<setw(5)<<setfill('0')<<adress1<<" "<<list[adress1].num<<" ";
		if(list[adress1].nex==-1)
			cout<<list[adress1].nex<<endl;
		else
			cout<<setw(5)<<setfill('0')<<list[adress1].nex<<endl;
		adress1=list[adress1].nex;		
	}
	
	while(adress2!=-1)
	{
		cout<<setw(5)<<setfill('0')<<adress2<<" "<<list[adress2].num<<" ";
		if(list[adress2].nex==-1)
			cout<<list[adress2].nex<<endl;
		else
			cout<<setw(5)<<setfill('0')<<list[adress2].nex<<endl;
		adress2=list[adress2].nex;		
	}
	
	return 0;
}
