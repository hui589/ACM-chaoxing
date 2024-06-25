#include<iostream>
//#include<bits/stdc++.h>
//#define _DEBUG_
using namespace std;

int main()
{
	int a,b,t;
	#ifdef _DEBUG_
	freopen("A.in","r",stdin);
	#endif
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a%b) cout<<b-(a%b)<<endl;
		else cout<<'0'<<endl;
	}	
	return 0;
}
