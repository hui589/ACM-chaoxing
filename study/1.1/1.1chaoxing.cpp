#include<iostream>
using namespace std;

/*算法
添加头文件 
#include<algorithm>
sort
lower_bound 	:有序序列 
upper_bound 	:有序序列 

*/ 

#define N 100009
#define INF Ox3f3f3f3f
#define ll long long

#define For(i,st,en) for(i=st;i<(en);i++)
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define printD(a) printf("%d",a)

template <typename T> inline void read(T &x){char c;bool nega=0;while((!isdigit(c=getchar()))&&(c!='-'));if(c=='-'){nega=1;c=getchar();}x=c-48;while(isdigit(c=getchar()))x=x*10+c-48;if(nega)x=-x;}
template <typename T> inline void writep(T x){if(x>9) writep(x/10);putchar(x%10+48);}
template <typename T> inline void write(T x){if(x<0){putchar('-');x=-x;}writep(x);}
template <typename T> inline void writeln(T x){write(x);putchar('\n');}
//#define _DEBUG_
//提高调试速度 

/*
F9	编译
F10	运行
F4	设置or取消断点 
F5	调试
F7	调试时进入下一行
F8	调试时进入函数 
*/

/*
STL
容器
 (1)顺序容器 线性表 
 	vector
 	deque
 	list
（2）关联容器 非线性 （红黑树） 
 	set			：快速查找，无重复元素 
 	multiset	：快速查找，可有重复元素 
 	map		
 	multimap 
 (3)容器适配器
	stack(栈)										:LIFO
 	queue（队列）									:FIFO 
	priority_queue（堆）（完全二叉树）（大顶堆）	:优先级高的元素先出 
 
 迭代器（Iterator)(指针) 
 支持迭代器的容器有：
 	vector
 	deque
 	list
 	set	
 	multiset
	map		
 	multimap
使用方法
vector<int>ve;
vector<int>::iterator it;
for(it=ve.begin();it!=ve.end();it++)
cout<<*it<<endl;
 	
 	
*/



void test01()
{
	int i;
	For(i,5,10)
	{
		cout<<i<<endl;
	}
	cout<<max(1,123);
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//加快cin，cout的速度 
	//scanf比cin快许多 
	//test01();
	
	int i;
	int t,n;
	#ifdef _DEBUG_
	freopen("1.1chaoxing.in","r",stdin);
	int t_ = clock();
	#endif
	cin>>t;
	int a[t];
	
	for(i = 0;i < t;i++)
	{
		cin>>a[i]; 
	}
	for(i = 0;i < t;i++)
	{
		printD(a[i]);
	}
	#ifdef _DEBUG_
	cerr<<"Run time: "<<clock() - t_ <<endl; 
	#endif
	
	
    return 0;
}
