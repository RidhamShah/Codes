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
#define ll long long 
#define lli long long int
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[])
{
	t(t);
	f(t)
	{
		std::vector<lli> v;
		t(r);
		t(b);
		t(g);
		v.pb(r);
		v.pb(b);
		v.pb(g);
		sort(v.begin(), v.end());
		//cout<<v[0]<<v[1]<<v[2];
		if(v[2]>(v[1]+v[0]+1))
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}