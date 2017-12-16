#include<iostream>
#include<string>
using namespace std;
int main()
{
	int m,n;  
    string str1,str2;
    cin>>n; 
    cin>>str1; 
    cin>>m;  
  for(int x=0;x<m-1;x++)
  {
	  if(m<=n)
	  {
	  str2=str2+str1[m-1];
	  m++;
	  }
  }
	cout<<str2<<endl;
	return 0;
}
