#include<iostream>
#include<cstring>
using namespace std;
bool able[30];//标记是否能够使用，即字符串中是否出现过该字母 
bool used[30];//标记该字母是否被使用过 
char password[20];//存放最终的结果 
int l;
void solve(int cur,int yuan,int fu,int start)
//参数分别为当前长度，元音字母个数，辅音字母个数，开始位置 
{
	if(cur==l)//若当前长度符合 
	{
		if(yuan<1||fu<2)//若元音辅音不满足，则不输出 
		return;
		password[cur]=' ';
		password[cur+1]='\0';
		cout<<password<<endl;//将当前结果输出即可 
		return;
	}
	for(int i=start;i<26;++i)//对字母进行逐一判断，因为必须按照顺序，所以只能由当前向后搜索 
	{
		if(able[i]&&!used[i])//若该字母可以使用且没有被使用过 
		{
			char chr=i+'a'-1;//定义临时变量用于还原字符 
			password[cur]=chr;//将该字符放入结果数组中(当前长度位置) 
			used[i]=true;//将该字母标记为用过 
			switch(chr)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					solve(cur+1,yuan+1,fu,i);//元音增加一个，向下个位置搜索 
					break;
				default:
					solve(cur+1,yuan,fu+1,i);//辅音增加一个，向下个位置搜索 
			}
			used[i]=false;//分支搜索结束后记得将标记清除，因为要开始新的循环 
		}		
	}
}
int main()
{
	char str[30];
	int sl;
	cin>>l>>sl>>str; 
		memset(able,false,sizeof(able));
		memset(used,false,sizeof(used));
		for(int i=0;i<sl;++i)
			able[str[i]-'a'+1]=true;//将出现过的字母标记为真 
		solve(0,0,0,1);	
	return 0;
}

