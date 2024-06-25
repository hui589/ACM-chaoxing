#include<iostream>
//#define AAAAA
using namespace std;

int main()
{
	int n,i,j,sum = 0,add = 0;
	#ifdef AAAAA
	freopen("C.in","r",stdin);
	#endif 
	cin>>n;
	int a[n],b[n];
	for(i = 0;i < n;i++)
	{
		cin>>a[i];
		sum += a[i];
		b[i] = 1;
	}
	n /= 2;//n¶Ô 
	sum /= n;
	//cout<<sum<<endl;
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < (n * 2);j++)
		{
			if(b[j])
			{
				add = a[j];
				b[j] = 0;
				cout<<(j+1)<<' ';
				j++;
				break;
			}
		}
		while(1)
		{
			if(b[j])
			{
				if(sum == (add + a[j]))
				{
					b[j] = 0;
					cout<<(j+1)<<' ';
					break;
				}
			}
			j++;
		}
		cout<<endl;
	}
	return 0;
}
