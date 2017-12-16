#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n,m;  
    int temp;  
    long long sum;  
    scanf("%d",&n);  
    while(n--)  
    {  
        sum=0;  
        multiset<long long> s;  
        scanf("%d",&m);  
        while(m--)  
        {  
            scanf("%d",&temp);  
            s.insert(temp);  
        }  
        while(s.size()>1)  
        {  
            multiset<long long>::iterator it=s.begin();  
            long long a=*it;  
            long long b=*(++it);  
            s.erase(s.begin());  
            s.erase(s.begin());  
            s.insert(a+b);  
            sum+=a+b;  
        }  
        printf("%lld\n",sum);  
    }  
  
	return 0;
}
