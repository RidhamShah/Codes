#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		long long int n,k,ans=0;
		cin>>n>>k;

		while(n)
		{
			ans+=(n%k);
			n/=k;
			ans++;
		}

		cout<<ans-1<<endl;
	}
	return 0;
}