#include<iostream>
using namespace std;
int main()
{
	int s;
	cin>>s;
	if(s>=90)            cout<<'A'<<endl;
	else if(s>=80&&s<90) cout<<'B'<<endl;
	else if(s>=70&&s<80) cout<<'C'<<endl;
	else if(s>=60&&s<70) cout<<'C'<<endl;
	else                 cout<<'E'<<endl;
	return 0;
}
