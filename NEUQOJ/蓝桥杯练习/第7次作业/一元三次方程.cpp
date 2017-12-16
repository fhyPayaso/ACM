#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double x[4];//x[1],x[2],x[3]分别存三个解 
double a,b,c,d,u,v;//u，v作为二分的标记 
int i,t;//t代表所得解的下标 
double f(double x)
{
     double temp;
     temp=((a*x+b)*x+c)*x+d;//将标记点带回原式用于确定正负以及精度比较 
     return temp;
}   
int main()
 { 
    	while(cin>>a>>b>>c>>d)
      {
          t=0;
          for(i=-100;i<=100;i++)//原题解的范围是-100~100之间 
           {
               u=double(i);//将i强制转换成double类型作为左标记 
               v=u+0.99999;//精度为小数点后5位，确定右标记 
               if(fabs(f(u))<0.00001||f(u)*f(v)<=0)//若左标记符合精度或左右精度之间有解 
			   //fabs为浮点数绝对值 
                {
                    t++;//一定有解 
                    if(fabs(f(u))<0.00001)//左标记符合精度，则左标记即为一个解 
                       x[t]=u;
                    else//否则的话在左右标记中二分查找 
                       {
                    	   while((u+0.001<v)&&fabs(f((u+v)/2))>=0.00001)//保证左标记小于右标记同时中间标记不满足精度  
                           {
                               if(f(u)*f((u+v)/2)<0)//解在左标记与中间标记之间 
                                 v=(u+v)/2;//将中间标记作为右标记 
                               else
                                 u=(u+v)/2;//否则作为左标记 
                           }
                    	   x[t]=(u+v)/2;//满足精度直接作为一个解     
                       }      
                }   
           }   
      cout<<fixed<<setprecision(2)<<x[1]<<" "<<x[2]<<" "<<x[3]<<endl;
      }
    
     return 0;
 }   
 
