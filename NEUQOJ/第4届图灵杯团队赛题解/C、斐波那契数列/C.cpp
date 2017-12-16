/*
先算前480个fibs，然后二分确定a和b数列fibs里的位置，ab两位置求个差值，就可以得到他们中间包含的fibs个数。
a和b也是fibs的情况特判一下。
*/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

#define MAXN	500
#define MAXLEN	110
#define LAST MAXLEN-2

char store[MAXN][MAXLEN];
char *Fibs[MAXN];

char* IntAddition(char *a,char *b,char *sum){
	int i,j,k,first;
	for(i=strlen(a)-1,j=LAST;i>=0;i--,j--){
		sum[j]=a[i]-'0';
		}
	for(i=strlen(b)-1,k=LAST;i>=0;i--,k--){
		sum[k]+=b[i]-'0';
		}
	first=j<k?j:k;
	for(i=LAST;i>=first;i--){
		sum[i-1]+=sum[i]/10;
		sum[i]=sum[i]%10+'0';
		}
	while(sum[first]=='0'&&first<LAST){
		first++;
		}
	return &sum[first];
	}

void Fibonacci(void){
	memset(store,0,sizeof(store));
	memset(Fibs,NULL,sizeof(Fibs));

	strcpy(store[1],"1");
	strcpy(store[2],"2");
	Fibs[1]=store[1];
	Fibs[2]=store[2];

	int i;
	for(i=3;i<485;i++){
		Fibs[i]=IntAddition(Fibs[i-2],Fibs[i-1],store[i]);
		}
	}

int Compare(char *a,char *b){
	int lenA=strlen(a);
	int lenB=strlen(b);
	if(lenA==lenB)
		return strcmp(a,b);
	return lenA>lenB?1:-1;
	}

int BinarySearch(char *num,bool &flag){
	int low=1;
	int high=480;	
	while(low<=high){
		int mid=(low+high)/2;
		int res=Compare(num,Fibs[mid]);
		if(res==0){
			flag=true;
			return mid;
			}
		else if(res<0)
			high=mid-1;
		else
			low=mid+1;
		}
	return low;
	}

int main(){
	Fibonacci();
	char a[MAXLEN],b[MAXLEN];
	while(scanf("%s %s",a,b)!=EOF){
		if(strcmp(a,"0")==0&&strcmp(b,"0")==0){
			break;
			}
		bool flagLeft=false;
		bool flagRight=false;
		int left=BinarySearch(a,flagLeft);
		int right=BinarySearch(b,flagRight);
		if (flagRight)
			printf("%d\n",right-left+1);
		else
			printf("%d\n",right-left);
		}
	return 0;
	}
