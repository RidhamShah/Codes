#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define t(a) long long int a;cin>>a
using namespace std;

int main(int argc, char const *argv[])
{
	t(n);
	t(l);
	long long int a=1,t=0,m=0;
	f(n)
	{
		t=(i+2)*(i+1);
		t/=2;

		if(t+1-(n-i)==l)
		{
			cout<<(n-i-1);
			break;
		}
	}
	return 0;
}