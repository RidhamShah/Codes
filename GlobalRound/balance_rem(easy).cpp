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
	std::vector< pair<ll, pair<ll,ll> > > v;
	v.pb(mp(0,mp(1,0)));
	v.pb(mp(0,mp(3,0)));
	v.pb(mp(0,mp(2,0)));
	v.pb(mp(0,mp(6,0)));
	v.pb(mp(0,mp(4,0)));
	v.pb(mp(0,mp(5,0)));
	sort(v.begin(),v.end());
	f(n)
		cout<<v[i].second.second<<"\n";
	return 0;
}