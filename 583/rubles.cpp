#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
//#include<boost/multiprecision/cpp_int.hpp>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define ff(a,n) for(long long int i=a;i<n;i++)
#define gg(a,n) for(long long int j=a;j<n;j++)
#define t(a) long long int a;cin>>a
#define pb push_back
#define mp make_pair
#define ll long long
#define op std::ios_base::sync_with_stdio(false)
//using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[])
{
	t(r);
	t(d);
	t(e);
	ll int k=5*e;
	ll int rr=r;
	ll int rrr=r;
	ll int rrrr=r;

	ll int a=r/(k);
	r-=a*5*e;
	ll int b=r/d;
	r-=b*d;
	ll int c=rr/d;
	rr-=c*d;
	ll int dd=rr/(5*e);
	rr-=dd*5*e;

	while(rrr>=5*e)
	{
		rrr-=5*e;
		if(rrr%d==0)
		{
			rrr=0;
			break;
		}
	}
	while(rrrr>=d)
	{
		rrrr-=d;
		if(rrr%k==0)
		{
			rrrr=0;
			break;
		}
	}
	

	cout<<min( min(r,rr),min(rrr,rrrr));
	return 0;
}