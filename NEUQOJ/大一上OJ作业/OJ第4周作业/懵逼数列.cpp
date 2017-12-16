#include<iostream>  
#include<cmath>
using namespace std;  
int main()  
{  
    int n,k,a[10],l=1;  
    long long s=0;
	cin>>k>>n;  
    while(n>0)  
    {  
        a[l++]=n%2;  
        n/=2;  
    } 
    l--;   
    for(int i=1;i<=l;i++)  
    {  
        if (a[i])   
        s+=pow(k,i-1);  
    }  
    cout<<s<<endl; 
    return 0;
}  
