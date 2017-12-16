#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a,c,d,t,p=3.1415927;
	int b,i=0;
	while(cin>>a>>b>>c) 
	{
		if(b==0)
		break;
		d=(p*a*b)/(12*5280);
		t=60*60*d/c;
		i++;
		cout<<"Trip #"<<i<<": "
		<<setiosflags(ios::fixed)<<setprecision(2)<<d<<" "
	    <<setiosflags(ios::fixed)<<setprecision(2)<<t<<endl;
	}
	return 0;
} 
