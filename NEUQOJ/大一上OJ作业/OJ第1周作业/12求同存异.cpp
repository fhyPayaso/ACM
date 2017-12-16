#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    int a[6],b[8];
    
    for(i=0;i<6;i++)
    	{scanf("%d",&a[i]);}
    for(j=0;j<8;j++)
    	{scanf("%d",&b[j]);}
    for(i=0;i<6;i++)
	{
       for(j=0;j<8;j++)
       if(b[j]==a[i])
	   {
        printf("%d\n",b[j]);
        break;
       }
    }
    return 0;        
}
