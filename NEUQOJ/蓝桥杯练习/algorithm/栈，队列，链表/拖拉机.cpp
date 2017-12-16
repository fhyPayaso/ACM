#include<iostream>
using namespace std;
#define num 6
struct que
{ 
	int data[1000];//模拟队列，代表手中牌 
	int head;//队列头 
	int tail;//队列尾 
};

struct stack
{
	int data[10];//模拟栈，代表桌上牌 
	int top;//顶端牌 
};


int main()
{
	struct que q1,q2;
	struct stack s;
	int book[10];//记录并查重 
	int i,t;
	
	//队列初始化 
	q1.head=1;   q1.tail=1;
	q2.head=1;   q2.tail=1;
	//栈初始化 
	s.top=0;
	//标记数组初始化
	for(i=1;i<10;i++) book[i]=0; 
	
	//分别给两人发牌 
	for(i=1;i<=num;i++)
	{
		cin>>q1.data[q1.tail];//入队 
		q1.tail++;//队尾向后挪 
	}  
	for(i=1;i<=num;i++)
	{
		cin>>q2.data[q2.tail];
		q2.tail++; 
	}
	    
	//当两人手里均有牌，即队列均不为空时进行循环 
	while(q1.head<q1.tail&&q2.head<q2.tail) 
	{
		t=q1.data[q1.head];//甲出牌 
		//判断是否赢牌 
		if(book[t]==0)//桌面上没有t 
		{
			//不能赢牌 
			q1.head++;//将出的牌出队
			s.top++; 
			s.data[s.top]=t;//入栈
			book[t]=1;//记录t牌已经存在 
		}
		else
		{
			//能赢牌 
			q1.head++;
			q1.data[q1.tail]=t;//将刚出的牌放到队尾 
			q1.tail++; 
			//将剩余的牌依次放到队尾 
			while(s.data[s.top]!=t)
			{
				book[s.data[s.top]]=0;//取消存在标记 
				q1.data[q1.tail]=s.data[s.top];//放入队尾 
				q1.tail++;
				s.top--;
			} 
		} 
		/*-------------------------------------------------*/ 
		t=q2.data[q2.head];//乙出牌 
		//判断是否赢牌 
		if(book[t]==0)//桌面上没有t 
		{
			//不能赢牌 
			q2.head++;//将出的牌出队
			s.top++; 
			s.data[s.top]=t;//入栈
			book[t]=1;//记录t牌已经存在 
		}
		else
		{
			//能赢牌 
			q2.head++;
			q2.data[q2.tail]=t;//将刚出的牌放到队尾 
			q2.tail++; 
			//将剩余的牌依次放到队尾 
			while(s.data[s.top]!=t)
			{
				book[s.data[s.top]]=0;//取消存在标记 
				q2.data[q2.tail]=s.data[s.top];//放入队尾 
				q2.tail++;
				s.top--;
			} 
		} 
	}
	
	//判断输赢 
	if(q2.head==q2.tail) 
	{
		cout<<"甲赢，当前手中牌为"; 
		for(i=q1.head;i<q1.tail;i++) cout<<q1.data[i]<<" ";
		cout<<endl;
		if(s.top>0)
		{
			cout<<"桌上牌为";
			for(i=1;i<=s.top;i++) cout<<s.data[i]<<" ";
		}
		else
			cout<<"桌上无牌";
	}
	else
	{
		cout<<"乙赢，当前手中牌为"; 
		for(i=q2.head;i<q2.tail;i++) cout<<q2.data[i]<<" ";
		cout<<endl;
		if(s.top>0)
		{
			cout<<"桌上牌为";
			for(i=1;i<=s.top;i++) cout<<s.data[i]<<" ";
		}
		else
			cout<<"桌上无牌";
	} 
	
	return 0;
} 
