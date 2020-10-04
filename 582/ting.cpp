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
	op;
	t(n);
	t(k);

	ll int arr[n],ha[200001],hb[200001],mx=0;
	std::vector<ll int> v;
	f(n)
	{
		cin>>arr[i];
		mx=max(mx,arr[i]);
		ha[arr[i]]++;
	}
	for(ll int i=mx;i>=0;i--)
	{
		if(ha[i]+hb[i]>=k)
		{
			//cout<<ha[i]<<hb[i];
			ha[i]>=k ? v.pb(0) : v.pb(k-ha[i]);
		}
		else
		{
			hb[i/2]+=(ha[i]+hb[i]);
		}
	}
	//cout<<ha[1]<<ha[2]<<ha[3]<<ha[4]<<ha[5];
	return 0;
}