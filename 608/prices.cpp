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
	t(a);
	t(b);
	t(c);
	t(d);
	t(e);
	t(f);
	lli dd=d;
	lli ans1=0,ans2=0;
	lli di=min(a,d);
	d-=di;
	ans1=e*di;
	ans1+=f*min(b,min(c,d));

	di=min(dd,min(b,c));
	ans2=di*f;
	dd-=di;
	ans2+=e*min(a,dd);

	cout<<max(ans1,ans2);
	return 0;
}