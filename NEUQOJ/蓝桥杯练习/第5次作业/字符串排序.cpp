#include<iostream>
#include<string>
using namespace std;
bool cmp(string a,string b)
{
	if(a.length()>b.length()) return true;//如果长度不同可以直接判断 
	else if(a.length()<b.length()) return false;
	else
	{
		for(int i=0;i<a.length();i++)//否则从第一位开始进行逐位比较 
		{
			if(a[i]<b[i]) return true;//注意比较的时候ASCII码越小反而值越大 
			else if(a[i]>b[i]) return false;
		}
	}
	return false;
}
int main()
{
	int n,i,j;
	string str[1005],temp;
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>str[i];
	
	
	for(i=0;i<n-1;i++)//简单冒泡即可 
	{
		for(j=0;j<n-i-1;j++)
		{
			if(cmp(str[j],str[j+1]))//写好比较函数，升序排列 ，即前者比后者大的时候交换 
			{
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)//输出排好的字符串 
	cout<<str[i]<<endl;
		
	return 0;
 } 
