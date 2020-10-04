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
#define ll long long int
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[])
{
	op;
	t(n);
	std::vector<ll> en,ex;
	f(n)
	{
		t(a);
		en.pb(a);
	}
	f(n)
	{
		t(a);
		ex.pb(a);
	}
	unordered_map<ll,ll> mp;

	ll p1=0,ans=0;
	f(n)
	{
		if(mp[ex[i]]==0)
		{
			
			if(mp[en[p1]])
			{
				i--;
				p1++;
				continue;
			}
			if(ex[i]==en[p1])
			{
				p1++;
			}
			else
			{
				mp[ex[i]]++;
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}