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

ll block(long int x) 
{ 
	ll ans=0;
	vector<long int> v; 
	while (x > 0) 
	{ 
		v.push_back(x % 2); 
		x = x / 2; 
	}
	for (int i = 0; i < v.size(); i++) 
	{ 
		if (v[i] == 1) 
		{ 
			ans++;
		} 
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	op;
	t(x);
	t(p);
	if(p==0)
	{
		cout<<block(x);
		return 0;
	}
	ll cnt=0;
	std::vector<int> v;
	f(9)
	{
		cnt++;
		x=x-p;
		ll ans=block(x);
		if(ans==cnt)
		{
			v.pb(ans);
		}
	}
	if(v.size())
	{
		sort(v.begin(),v.end());
		cout<<v[0];
	}
	else
		cout<<"-1";

	return 0;
}