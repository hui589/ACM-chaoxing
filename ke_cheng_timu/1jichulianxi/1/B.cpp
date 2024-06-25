#include<iostream>
#include<algorithm>
//#define DEBUG
using namespace std;

int main()
{
	int a[3],_t;
	int x,y,z;
	#ifdef DEBUG 
	freopen("B.in","r",stdin);
	#endif
	cin>>_t;
	while(_t--)
	{
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		x= a[0],y=a[1],z=a[2];
		if((x==y) && (y==z))
		{
			cout<<"YES\n"<<x<<' '<<y<<' '<<z<<endl;
		}
		else if(y==z)
		{
			cout<<"YES\n"<<x<<' '<<x<<' '<<z<<endl;
		}
		else if(x==y)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
		
	}
	
	
	 
	return 0;
}
