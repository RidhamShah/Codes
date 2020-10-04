#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define t(a) long long int a;cin>>a
using namespace std;

int main(int argc, char const *argv[])
{
	t(x);
	t(y);
	long long int ans=x+y-2,mans=1;

	f(ans)
	{
		mans=(mans*2)%998244353;
	}
	cout<<(mans*4)%998244353;
	return 0;
}