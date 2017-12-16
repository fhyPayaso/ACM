#include<iostream>
using namespace std;
int main()
{
    int a[10000][8],b[8],i,j,k,l,z,n;  
    while(cin>>n)
	{   
		if(n==0)break;
    	for(i=0;i<n;i++)
    	{   
			a[i][0]=i+1;
        	a[i][1]=0;
        	for(j=2;j<=7;j++)
        	{
        		cin>>a[i][j];
        		a[i][1]=a[i][1]+a[i][j];
        	}
    	}
    for(k=1;k<n;k++)     
    {   
		z=0;                
        for(i=1;i<=n-k;i++)     
        {   
            for(j=1;j<=7;j++)   
            {
            	if(a[z][j]>a[i][j])
                {
                    z=i;
                    break;
                }
            	else if(a[z][j]<a[i][j])
					break;
            	else
                {   
					if(j<7)
					continue;
                    else if(j=7)
                    {
						z=i;
                    	break;
                    }
                }
            }           
        }
        if(z!=(n-k))
        {
            for(l=0;l<=7;l++)
            {
				b[l]=a[n-k][l];
            	a[n-k][l]=a[z][l];
            	a[z][l]=b[l];
            }
        }
    } 
     for(i=0;i<n;i++)
     cout<<a[i][0]<<" ";
     cout<<endl;
	}
    return 0;
}


