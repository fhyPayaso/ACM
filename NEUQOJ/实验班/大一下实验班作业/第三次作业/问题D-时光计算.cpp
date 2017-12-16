#include<iostream>
#include<iomanip>
using namespace std;

int aa[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int run(int x)
{
	if(x%4==0)
	{
		if(x%400==0)			return 1;
		else if(x%100==0) 	    return 0;
		else 					return 1;
	}
	return 0;
}

int main()
{
	int t,year,month,day,time;
	int ny,nm,nd;
	char a;
	cin>>t;
	cin>>year>>a>>month>>a>>day;
	while(t--)
	{
		cin>>time;
		ny=year;nm=month;nd=day;
		
		while(time)
		{
			time--;
			nd++;
			if(run(ny)&&nm==2)
			{
				if(nd>(aa[nm]+1))
				{
					nd-=(aa[nm]+1);
					nm++;
				}
			}
			else
			{
				if(nd>aa[nm])
				{
					nd-=aa[nm];
					nm++;
				}
			}
			if(nm>12)
			{
				nm-=12;
				ny++;
			}
		}
		cout<<setw(4)<<setfill('0')<<ny<<"-";
		cout<<setw(2)<<setfill('0')<<nm<<"-";
		cout<<setw(2)<<setfill('0')<<nd<<endl;
	}
	
	return 0;
}
