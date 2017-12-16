#include<iostream>
#include<string>
#include<map>
using namespace std;
map <string ,int> tab;
void init()
{
    tab["rat"]=1;
    tab["ox"]=2;
    tab["tiger"]=3;
    tab["rabbit"]=4;
    tab["dragon"]=5;
    tab["snake"]=6;
    tab["horse"]=7;
    tab["sheep"]=8;
    tab["monkey"]=9;
    tab["rooster"]=10;
    tab["dog"]=11;
    tab["pig"]=12;
}

int main()
{
    int ti;
    init();
    cin>>ti;
    while(ti--)
    {
        string a,b;
        cin>>a>>b;
        int ans=tab[b]-tab[a];
        if(ans<=0)
            ans+=12;
        cout<<ans<<endl;

    }

    return 0;
}
