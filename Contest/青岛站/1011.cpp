#include<iostream>
#include<set>
#include<cstring>
using namespace std;
typedef unsigned long long ull;
ull maxn=1000000000000+10;
bool prm[1000000000000+10];
ull p[50000];
init ()
{
    memset(prm,true,sizeof(prm));

    for(int i=2;i<=maxn;i++)
        if(prm[i])
            for(int j=i+i;j<=maxn;j+=i)
                rem[j]=false;
    for(int i=2;i<maxn;i++)
    {
        if(prm[i])cout<<i<<endl;
    }
}

int main()
{
    init();
    /*int ti;
    cin>>ti;
    set <ull >::iterator it;
    ull temp;
    while(ti--)
    {
        cin>>temp;
        it=tab.find(temp);
        if(it!=tab.end())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }*/
    return 0;
}
