#include<iostream>
using namespace std;
int main()
{
    int t;
    unsigned long long k,x,s,y,xa;
    cin>>t;
    for (int i=0;i<t;i++)
	{
        cin>>x>>k;
        xa=x;
        y=0;
        s=1;
        while (1)
		{
            if (x==0&&k==0)    
			break;
            int a;
            if (x!=0)
			{
                a=x%2;
                x/=2;
        	}
            else
                a=0;
            if (a==0&&k!=0)
			{
                a=k%2;
                k/=2;
            }
            y=y+(a*s);
            s*=2;
        }
        cout<<y-xa<<endl;
    }
} 

