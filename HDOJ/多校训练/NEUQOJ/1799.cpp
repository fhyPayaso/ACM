#include<iostream>
#include<string>
using namespace std;
int main()
{
	//freopen("in.txt","r",stdin);
	string str,s[500],ans;
	int maxn=-1,len=2;
	cin>>str;
	int l=str.size();
	
	for(int i=0;i<l;i++) 
	{
		s[i]=str[i];
		//cout<<s[i]<<endl;
	}
	
	for(int i=2;i<=l;i++)
	{
		for(int j=0;j<=l-i;j++) 
		{
			s[j]=s[j]+str[j+i-1];
			//cout<<s[j]<<endl;
		}
		
		int mm=-1;
		string ss;
		for(int j=0;j<=l-i;j++)
		{
			int cnt=1;
			for(int k=j+1;k<=l-i;k++)
			{
				if(s[j]==s[k])
				cnt++;
			}
			//cout<<cnt<<endl;
			if(cnt>mm)
			{
				mm=cnt;
				ss=s[j];
			}
		}
		//cout<<mm<<endl;
		if(mm>=maxn)
		{
			maxn=mm;
			ans=ss;
		}
	}
	cout<<ans<<endl<<maxn;
	
	return 0;
}
