#include<iostream>
#include<cstring>
#include<string>
#include<algorithm> 
using namespace std;
const int maxn=100000+100;
const long long  mod=1000000000+7;
int w[30][maxn];
int val[30],flag[30];
string str[maxn];
int n,MAX;
struct q
{
	int id;
	string value;
}temp[30];

bool cmp(const q &a, const q &b)
{
	for(int i=MAX-1;i>=0;i--)
	{
		if(a.value[i]!=b.value[i]) 
		return  a.value[i]>b.value[i];
	}
}

int main()
{	
	//freopen("input.txt","r",stdin);
	int x=1;
	while(cin>>n)
	{
		memset(w,0,sizeof(w));
		memset(flag,0,sizeof(flag));
		for(int i=0;i<26;i++) temp[i].value="";
		MAX=0;
		for(int i=0;i<n;i++)
		{
			cin>>str[i];
			int len=str[i].size();
			MAX=max(MAX,len);//记录最大长度 
				
			for(int j=0;j<len;j++)
			{
				int pos=len-j-1;
				if(flag[str[i][j]-'a']==0) flag[str[i][j]-'a']=1;//记录出现哪些字母记为1 
				
				w[str[i][j]-'a'][pos]++;//记录每个字母在每位出现的次数 
				while(w[str[i][j]-'a'][pos]>=26)//出现次数满26则进位 
				{
					w[str[i][j]-'a'][pos]-=26;
					w[str[i][j]-'a'][pos+1]++;
					pos++;
					if(pos==MAX) MAX++;//进位后判断是否需要更新 
				}	
			}
			
			if(len>1) flag[str[i][0]-'a']=2;//记录哪些字母不能为零记为2 
		}
		
//		for(int i=0;i<26;i++)
//		{
//			if(flag[i]==1)
//			cout<<char(i+'a')<<" ";
//			for(int j=0;j<MAX;j++)
//				cout<<w[i][j]<<" ";
//			cout<<endl;
//		}
		
		
		
		
			//转化成结构体中的字符串，用SORT排序 
			for(int i=0;i<26;i++)
			{
				for(int j=0;j<MAX;j++)
					temp[i].value+=char(w[i][j]+'a');
				temp[i].id=i;	
			}
			sort(temp,temp+26,cmp);
			
			
//			for(int i=0;i<26;i++)
//			{
//				cout<<char(temp[i].id+'a')<<" ";
//				cout<<temp[i].value<<endl;
//			} 
			
			int ok=0;//判断是否所有字母都出现，都出现则考虑0的分配问题 
			for(int i=0;i<26;i++)
			{
				if(flag[i]==0)
				{
					ok=1;
					break;
				}
			}
			
				
			//记录最小的可以为0的字母 
			int zero=-1;
			for(int i=25;i>=0;i--)
			{
				int t=temp[i].id;
				if(flag[t]!=2)
				{
					zero=t;
					break;
				}
			}
			//cout<<zero<<" "<<char(zero+'a')<<endl;
			
			//给每个字母按照排序赋值
			//zero直接赋零 
			if(ok==0)//全出现 
			{
				int i;
				for( i=0;i<26;i++)
				{
					int t=temp[i].id;
					if(t==zero) 
					{
						val[t]=0;
						break;
					} 
					else
						val[t]=25-i;
				}
				i++;	
				for(;i<26;i++)
				{
					int t=temp[i].id;
					val[t]=26-i;
				} 
				
								
			}
			else
			{
				for(int i=0;i<26;i++)
				{
					int t=temp[i].id; 
					val[t]=25-i;
				}
			}
			
			
//			for(int i=0;i<26;i++)
//				if(flag[i]!=0)
//					cout<<char(i+'a')<<" "<<val[i]<<endl;
			
			
			
			//将赋的值代入计算 
			long long  res=0,xs=1;
			for(int i=0;i<MAX;i++)
			{
				for(int j=0;j<26;j++)
				{
					if(flag[j]!=0&&w[j][i]!=0)
					{
						res+=val[j]*w[j][i]*xs;
						res%=mod;
					}
				}
				xs*=26;
				xs%=mod;	
			}
			
			
			cout<<"Case #"<<x++<<": ";
			cout<<res<<endl;
			
		
	}
	
	return 0;
}

