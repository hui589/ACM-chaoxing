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
	freopen("D.in","r",stdin);
	int t_ = clock();
	#endif

	cin>>_t;
	while(_t--)
	{
		
		x = 1;
		cin>>n;
		for(i = 0;i < n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(i = 1;i < n;i++)
		{
			if((a[i] - a[i-1]) > 1)
			{
				cout<<"NO"<<endl;
				x = 0;
				break;
			}
		}
		if(x)
		{
			cout<<"YES"<<endl;
		}
		

	}



	#ifdef _DEBUG_
	cerr<<"Run time: "<<clock() - t_ <<endl;
	#endif
    return 0;
}


