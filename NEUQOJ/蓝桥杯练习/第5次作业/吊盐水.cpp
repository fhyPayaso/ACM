#include<iostream>
using namespace std;
int main()
{
	int vul,d,time=0,t=1,i;
	cin>>vul>>d;
	
	while(vul)
	{
		for(i=1;i<=t;i++)
		{
			vul-=d;
			time++;
			if(vul<=0) 
			break;
		}
		if(vul<=0) 
		break;
		time++;
		t++;
	}
	
	cout<<time;
	return 0;
}
