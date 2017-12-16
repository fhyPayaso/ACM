#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
	int n1,n2,temp;
	set<int> a1;
	set<int> a2;
	cin>>n1;
	for(int i=1;i<=n1;i++) 
	{
		cin>>temp;
		a1.insert(temp);
	}
	cin>>n2;
	for(int i=1;i<=n2;i++) 
	{
		cin>>temp;
		a2.insert(temp);
	}
	
	set<int> b; 
	
	set_intersection(a1.begin(),a1.end(),a2.begin(),a2.end(),insert_iterator<set<int> >(b,b.begin()));
	set<int>::iterator it1;
	for(it1=b.begin();it1!=b.end();it1++)
	cout<<*it1<<" ";
	cout<<endl;
	
	b.clear();
	set_union(a1.begin(),a1.end(),a2.begin(),a2.end(),insert_iterator<set<int> >(b,b.begin()));
	set<int>::iterator it2;
	for(it2=b.begin();it2!=b.end();it2++)
	cout<<*it2<<" ";
	cout<<endl;
	
	b.clear();
	set_difference(a1.begin(),a1.end(),a2.begin(),a2.end(),insert_iterator<set<int> >(b,b.begin()));
	set<int>::iterator it3;
	for(it3=b.begin();it3!=b.end();it3++)
	cout<<*it3<<" ";
	cout<<endl;
	
	b.clear();
	set_symmetric_difference(a1.begin(),a1.end(),a2.begin(),a2.end(),insert_iterator<set<int> >(b,b.begin()));
	set<int>::iterator it4;
	for(it4=b.begin();it4!=b.end();it4++)
	cout<<*it4<<" ";
	
	return 0;
}
