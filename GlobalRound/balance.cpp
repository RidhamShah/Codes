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
#define v1(i) v[i].first.first
#define v2(i) v[i].first.second
#define v3(i) v[i].second.first
#define v4(i) v[i].second.second
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[])
{
	op;
	t(n);
	std::vector< pair< pair<ll,ll>, pair<ll,ll> > > v;
	f(n)
	{
		t(a);
		t(b);
		t(c);
		v.pb( mp(mp(a,b),mp(c,i)) );
	}

	sort(v.rbegin(),v.rend());
	
	std::vector<ll> del;
	ll ar[n],br[n],cr[n],dr[n];
	f(n)
	{
		ar[i]=v[i].first.first;
		br[i]=v[i].first.second;
		cr[i]=v[i].second.first;
		dr[i]=v[i].second.second;
		//cout<<dr[i]<<" ";
	}

	f(n-1)
	{
		if(ar[i]==ar[i+1] && br[i]==br[i+1])
		{
			del.pb(dr[i]);
			del.pb(dr[i+1]);
			dr[i]=-1;
			dr[i+1]=-1;
			i++;
		}
		else if(ar[i]==ar[i+1] && cr[i]==cr[i+1])
		{
			del.pb(dr[i]);
			del.pb(dr[i+1]);
			dr[i]=-1;
			dr[i+1]=-1;
			i++;
		}
		else if(cr[i]==cr[i+1] && br[i]==br[i+1])
		{
			del.pb(dr[i]);
			del.pb(dr[i+1]);
			dr[i]=-1;
			dr[i+1]=-1;
			i++;
		}
	}

	f(del.size())
	{
		cout<<del[i]+1<<" "<<del[i+1]+1<<"\n";
		i++;
	}
	ll cnt=0;

	f(n)
	{
		if(dr[i]!=-1)
		{
			cout<<dr[i]+1<<" ";
			cnt++;
			if(cnt%2==0)
				cout<<"\n";
		}
	}
	return 0;
}