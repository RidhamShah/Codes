#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define t(a) long long int a;cin>>a
using namespace std;


int main(int argc, char const *argv[])
{
	t(a);
	t(b);
	int c=(b/2)+(b%2),d;
	d=a-c;
	if(b>2*a+2 || a>b+2)
		cout<<"-1";
	else
	{
		if(a==c+1)
		{
			cout<<"0";
			a--;
		}
		while(abs(a-b)!=1 && abs(a-b)!=0)
		{
			cout<<"110";
			a--;
			a--;
			b--;
		}
		if(a==b)
		{
			f(a)
			{
				cout<<"10";
			}
		}
		else if(a>b)
		{
			f(b)
				cout<<"01";
			cout<<"0";
		}
		else
		{
			f(a)
				cout<<"10";
			cout<<"1";
		}

	}
	
	return 0;
}