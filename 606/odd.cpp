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
	test(t)
	{
		t(n);
		lli arr[n];
		map<lli,lli> mp;
		std::vector<lli> v;
		f(n)
		{
			cin>>arr[i];
			if(arr[i]%2==0)
				v.pb(arr[i]);
		}
		f(v.size())
		{
			lli cnt=0;
			while(v[i]%2==0)
			{
				v[i]/=2;
				cnt++;
			}
			mp[v[i]]=max(mp[v[i]],cnt);
		}
		lli ans=0;
		f(v.size())
		{
			ans+=mp[v[i]];
			mp[v[i]]=0;
		}
		cout<<ans<<endl;
	}
	return 0;
}