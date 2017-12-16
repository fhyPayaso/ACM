//水题
#include<iostream>
#include<set>
using namespace std;

int main(){  
    int Case;
	cin>>Case;
	set<int> Q;
	for(int i=1;i<=Case;++i){
		int t;
		cin>>t;
		Q.clear();
		for(int j=0;j<10;++j){
			int a;
            cin>>a;
            Q.insert(a);
            if(Q.size()>3) Q.erase(Q.begin());
			}
		cout<<t<<" "<<*Q.begin()<<endl;
		}
	return 0;
	}
