#include<iostream>
using namespace std;
int main()
{
	int v1,v2,t,s,l,i,time=0; 
	cin>>v1>>v2>>t>>s>>l;
	int s1=0,s2=0;
	while(s1<l&&s2<l)
	{
		if(s1-s2>=t)
		{
			for(int j=1;j<=s;j++)
			{
				s2+=v2;
				time++;
				if(s2>=l) break;
			}
		}
		if(s1>=l||s2>=l) break;
		s1+=v1;
		s2+=v2;
        time++;
	}
	
	if(s1==s2)     cout<<"D"<<endl<<time;
	else if(s1>s2) cout<<"R"<<endl<<time;
	else           cout<<"T"<<endl<<time;
	return 0;
 } 
