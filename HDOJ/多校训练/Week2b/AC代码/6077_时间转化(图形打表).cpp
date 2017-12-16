#include<iostream>
#include<string> 
using namespace std;
char a[8][22];
string s[10];

void init()
{
	s[0]=" .XX.X..XX..X....X..XX..X.XX.";
	s[1]=" .......X...X.......X...X....";
	s[2]=" .XX....X...X.XX.X...X....XX.";
	s[3]=" .XX....X...X.XX....X...X.XX.";
	s[4]=" ....X..XX..X.XX....X...X....";
	s[5]=" .XX.X...X....XX....X...X.XX.";
	s[6]=" .XX.X...X....XX.X..XX..X.XX.";
	s[7]=" .XX....X...X.......X...X....";
	s[8]=" .XX.X..XX..X.XX.X..XX..X.XX.";
	s[9]=" .XX.X..XX..X.XX....X...X.XX.";
}

int main()
{
	init();
	int t;
	scanf("%d",&t);
	while(t--)
	{
		for(int i=1;i<=7;i++)
			for(int j=1;j<=21;j++)
				cin>>a[i][j];
		string str[5];
		str[1]=" ";str[2]=" ";str[3]=" ";str[4]=" ";
		int b[5];
		for(int i=1;i<=7;i++)
		{
			for(int j=1;j<=4;j++)    str[1]+=a[i][j];
			for(int j=6;j<=9;j++)	 str[2]+=a[i][j];
			for(int j=13;j<=16;j++)  str[3]+=a[i][j];
			for(int j=18;j<=21;j++)  str[4]+=a[i][j];
		}
		
		for(int i=1;i<=4;i++)
		{
			for(int j=0;j<10;j++)
			{
				if(str[i]==s[j])
				{
					b[i]=j;
					break;
				}
			}
			//cout<<str[i]<<endl<<endl; 
		}
		printf("%d%d:%d%d\n",b[1],b[2],b[3],b[4]);
	}
	return 0;
}
