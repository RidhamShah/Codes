#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
//#include<boost/multiprecision/cpp_int.hpp>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define ff(a,n) for(long long int i=a;i<n;i++)
#define gg(a,n) for(long long int j=a;j<n;j++)
#define t(a) long long int a;cin>>a
#define test(te) t(te); while(te--)
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define ll long long int
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[])
{
	op;
	t(t);
	while(t--)
	{
		t(n);
		ll arr[n];
		f(n)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		ll ans=0;
		for(int i=n-1;i>=0;i--)
		{
			if(arr[i]>=n-i)
				ans=max(ans,n-i);
		}
		cout<<ans<<endl;
	}
	return 0;
}