#include<iostream>
using namespace std;
int main()
{
	unsigned long long  n,k;
	int x=1;
	while(cin>>n>>k)
	{
		cout<<"Case #"<<x++<<": ";
		
		if(k<=n) cout<<k<<endl;
		else
		{
			k-=n;
			unsigned long long a=k/(n-1);
			unsigned long long b=k%(n-1);
			if(b!=0) cout<<b<<endl;
			else
			{
				if(a%2==1) cout<<n-1<<endl;
				else if(a%2==0) cout<<n<<endl;
			}
		}
	}
	
	
	return 0;
 } 
/* day    gui   chuan    lan   
   1      123     1       1
   2      23      2       12 /
   3      3       3       3  
   4      12      1       13 /
   5      2       2       2  
   6      13      1       12 /
   7      3       3       3  
   8      12      1       13 /    12312131213
   
   1      1234    1       1
   2      234     2       12
   3      34      3       123 /
   4      4       4       4  
   5      123     1       14
   6      23      2       124/
   7      3       3       3  
   8      124     1       13 
   9      24      2       123/
   10     4       4       4 
   11     123     1       14     12341231241231248*/
    
 
