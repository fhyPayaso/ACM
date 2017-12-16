#include<iostream>
using namespace std;
int main()
{
	
	int a,b,n;
	while(cin>>a>>b>>n)
	{
		if(!a&&!b&&!n) break;
		
		int arr[3];
		arr[0]=1;
		arr[1]=1;
		int i=2;
		n%=(48*21);
		//cout<<1<<" "<<1<<" ";
		while(i<n)
		{
			arr[i%3]=(arr[(i-1)%3]*a+arr[(i-2)%3]*b)%7;
			//cout<<arr[i%3]<<" ";
			i++;
		}
		if(n==1||n==2) cout<<1<<endl;
		else cout<<arr[(i-1)%3]<<endl;
		
	}
	
	return 0;
}
/*
1 1  16
1 2  6
1 3  24
1 4  48
1 5  21
1 6  6
1 7  1

2 1  6
2 2  48
2 3  6
2 4  48
2 5  24
2 6  1
2 7  1 3

*/
