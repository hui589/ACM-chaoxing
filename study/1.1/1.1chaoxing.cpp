#include<iostream>
using namespace std;

/*�㷨
���ͷ�ļ� 
#include<algorithm>
sort
lower_bound 	:�������� 
upper_bound 	:�������� 

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
//��ߵ����ٶ� 

/*
F9	����
F10	����
F4	����orȡ���ϵ� 
F5	����
F7	����ʱ������һ��
F8	����ʱ���뺯�� 
*/

/*
STL
����
 (1)˳������ ���Ա� 
 	vector
 	deque
 	list
��2���������� ������ ��������� 
 	set			�����ٲ��ң����ظ�Ԫ�� 
 	multiset	�����ٲ��ң������ظ�Ԫ�� 
 	map		
 	multimap 
 (3)����������
	stack(ջ)										:LIFO
 	queue�����У�									:FIFO 
	priority_queue���ѣ�����ȫ�����������󶥶ѣ�	:���ȼ��ߵ�Ԫ���ȳ� 
 
 ��������Iterator)(ָ��) 
 ֧�ֵ������������У�
 	vector
 	deque
 	list
 	set	
 	multiset
	map		
 	multimap
ʹ�÷���
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
	//�ӿ�cin��cout���ٶ� 
	//scanf��cin����� 
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
