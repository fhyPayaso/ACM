#include<iostream>
#include<algorithm>
using namespace std;

const double wh=1.0/120,wm=1.0/10,ws=6.0;//角速度 

const double s_h=719.0/120,s_m=59.0/10,m_h=11.0/120;//一秒相差多少° 

const double sh=120.0/719,sm=10.0/59,mh=120.0/11;//相差1°所需多少秒 

const double tsh=360.0*120/719,
			 tsm=360.0*10/59,
			 tmh=360.0*120/11;// 相差360°所需多少秒 
			 
const double time=12*60*60+0.0000001;//总秒数 

double min(double a,double b)
{
	return a<b?a:b;
}

double max(double a,double b)
{
	return a>b?a:b;
}

int main()
{
	int d;
	while(cin>>d)
	{
		if(d==-1) break;
		double sum=0;
		//计算两两之间第一次满足和不满足的时间 
		double beginSH=d*sh, endSH=(360-d)*sh;
		double beginSM=d*sm, endSM=(360-d)*sm;
		double beginMH=d*mh, endMH=(360-d)*mh; 
		
		for(double b1=beginSH,e1=endSH; e1<=time ;b1+=tsh,e1+=tsh) 
		{
			for(double b2=beginSM,e2=endSM; e2<=time ;b2+=tsm,e2+=tsm) 
			{
				if(e2<b1) continue;//SM时间段未到SH时间段，无交集
				if(b2>e1) break;//SM时间段超过SH时间段，无交集 
				for(double b3=beginMH,e3=endMH; e3<=time ;b3+=tmh,e3+=tmh) 
				{
					if(e3<b1||e3<b2) continue;//MH时间段未到另外时间段，无交集
					if(b3>e1||b3>e2) break;//MH时间段超过另外时间段，无交集
					
					double begin=max(b1,max(b2,b3));
					double end=min(e1,min(e2,e3));
					sum+=(end-begin);
				}
			}
		}
		printf("%.3lf\n",(sum/time)*100); 
		
	}
	return 0;
 } 
