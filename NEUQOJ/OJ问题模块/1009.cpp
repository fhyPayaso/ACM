#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[1000];
	int t1=0,t2=0,t3=0,t4=0,i;
	gets(a);
	int l=strlen(a);
	for(i=0;i<l;i++)
	{
		cin>>a[i];
		if(('a'<=a[i]&&'z'>=a[i])||('A'<=a[i]&&'Z'>=a[i]))  t1++;
		else if (a[i]==' ') t2++;
		else if (a[i]>='0'&&a[i]<='9') t3++;
		else t4++;
	}
	cout<<t1<<endl<<t2<<endl<<t3<<endl<<t4<<endl;
	return 0;
}
