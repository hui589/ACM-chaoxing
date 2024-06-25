#include<iostream>
#include<algorithm>
#include<time.h>
//#include<bits/stdc++.h>
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
#define For(i,st,en) for(i=st;i<(en);i++)
#define N 100005
#define INF Ox3f3f3f3f
#define ll long long
#define _DEBUG_
using namespace std;

void t01()
{ 
	
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int _t,n,a[N];
	int i,j;
	int max;
	#ifdef _DEBUG_
	freopen("in.in","r",stdin);
	int t_ = clock();
	#endif
	int x,y,z;
	int b,c;
	
	cin>>_t;
	while(_t--)
	{
		cin>>n;
		y = 0; 
		while(1)
		{
			b = n % 10;//剩余个位 
			y += n - b;//总计花了
			x = n / 10;//回馈 
			if(x == 0)
			{
				y += b;
				cout<<y<<endl;
				break;
			}
			n = x + b;//now have
		}
		
		
		
		
			
	}
	
	
	
	#ifdef _DEBUG_
	cerr<<"\nRun time: "<<clock() - t_ <<endl; 
	#endif
    return 0;
}

