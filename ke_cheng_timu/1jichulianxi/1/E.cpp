#include<iostream>
#include<algorithm>
#include<time.h>
#include<bits/stdc++.h>
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
#define N 100005
#define INF Ox3f3f3f3f
#define ll long long
//#define _DEBUG_
using namespace std;

void t01()
{

}

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int _t,n,x,y,z,a[N];
	int i,j;
	#ifdef _DEBUG_
	freopen("E.in","r",stdin);
	int t_ = clock();
	#endif
	int k;

	cin>>_t;
	while(_t--)
	{
		cin>>n>>k;
		if(k>n) cout<<k-n<<endl;
		else
		{
			if((n-k)&1) cout<<1<<endl;
			else cout<<0<<endl;
		}

	}



	#ifdef _DEBUG_
	cerr<<"Run time: "<<clock() - t_ <<endl;
	#endif
    return 0;
}


