#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> dui[35];
int n;

void find(int x,int &h,int &p)
{
	for(p=0;p<n;p++)
		for(h=0;h<dui[p].size();h++)
			if(dui[p][h]==x)
				return ;
}

void back(int h,int p)
{
	for(int i=h+1;i<dui[p].size();i++)
	{
		int temp=dui[p][i];
		dui[temp].push_back(temp);
	}
	dui[p].resize(h+1);
}

void onto(int p1,int p2,int h)
{
	for(int i=h;i<dui[p1].size();i++)
	{
		int temp=dui[p1][i];
		dui[p2].push_back(temp);
	}
	dui[p1].resize(h);
}



int main()
{
	int a,b,i,j;
	int ha,pa,hb,pb;
	string s1,s2;
	
	cin>>n;
	for(i=0;i<n;n++)
		dui[i].push_back(i);
	cin>>ha;
	/*while(cin>>s1>>a>>s2>>b)
	{
		
		find(a,ha,pa);
		find(b,hb,pb);
		if(pa==pb)
		continue;
		
		if(s1=="move"&&s2=="onto")
		{
			back(ha,pa);
			back(hb,pb);
		}
		else if(s1=="move"&&s2=="over")
			back(ha,pa);
		else if(s1=="pile"&&s2=="onto")
			back(hb,pb);
		//else if(s1=="pile"&&s2=="over")
		onto(pa,pb,ha);
	}
	
	for(i=0;i<n;i++)
	{
		cout<<i<<":";
		for(j=0;j<dui[i].size();j++)
		cout<<" "<<dui[i][j];
		cout<<endl;
	}*/
	return 0;
 } 
