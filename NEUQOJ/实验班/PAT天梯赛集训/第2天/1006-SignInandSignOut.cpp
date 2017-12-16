#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string num,ru,chu;
	string zao,wan,fru="23:59:59",fchu="00:00:00";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num>>ru>>chu;
		if(ru<fru)
		{
			zao=num;
			fru=ru;
		}
		if(chu>fchu)
		{
			wan=num;
			fchu=chu;
		}
	}
	cout<<zao<<" "<<wan;	
	return 0;
}
