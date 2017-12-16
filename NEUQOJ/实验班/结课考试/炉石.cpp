#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string a;
	int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0;
	getline(cin,a);
	//cout<<a.size();
	for(int i=0;i<a.size();i++)
	{
		if(a[i]=='I'||a[i]=='i') a1++;
		if(a[i]=='l'||a[i]=='L') a2++;
		if(a[i]=='o'||a[i]=='O') a3++;
		if(a[i]=='v'||a[i]=='V') a4++;
		if(a[i]=='e'||a[i]=='E') a5++;
		if(a[i]=='c'||a[i]=='C') a6++;
		if(a[i]=='s'||a[i]=='S') a7++;
	}
	 a5=a5/2;
	 a2=min(a1,a2);
	 a3=min(a2,a3);
	 a4=min(a3,a4);
	 a5=min(a4,a5);
	 a6=min(a5,a6);
	 a7=min(a6,a7);
	cout<<a7<<endl;
	return 0;
}

