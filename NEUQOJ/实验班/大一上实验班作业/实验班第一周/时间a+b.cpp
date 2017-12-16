#include<iostream>
using namespace std;
int main()
{
	int n;
	int a1,a2,a3,b1,b2,b3,t1=0,t2=0,t3=0;
	cin>>n;
	for(int i=1;i<=n;i++)
{
	cin>>a1>>a2>>a3>>b1>>b2>>b3;
	t3=a3+b3;
		if(t3>=60)
		{
			t3=t3-60;
			t2++;
		}
	t2+=a2+b2;
		if(t2>=60)
		{
			t2=t2-60;
			t1++;
		}
	t1+=a1+b1;

	cout<<t1<<" "<<t2<<" "<<t3<<endl;
	t1=0;t2=0;t3=0;
}
	return 0;
}
