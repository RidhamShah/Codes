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
	op;
	t(n);
	std::vector< pair<lli,lli> > v;
	std::vector<lli> w,che;
	lli fl[n+1]={0};
	f(n)
	{
		t(a);
		v.pb(mp(a,i+1));
		fl[a]=1;
	}
	ff(1,n+1)
	{
		if(!fl[i])
			w.pb(i);
	}
	while(w.size()!=2)
	{
		f(n)
		{
			if(v[i].first==0)
			{
				if(w[0]!=v[i].second)
				{
					v[i].first=w[0];
					w.erase(w.begin());
				}
				else
				{
					v[i].first=w[w.size()];
					w.pop_back();
				}
			}
		}
	}
	f(n)
	{
		if(v[i].first==0)
			che.pb(v[i].second);
	}
	if(che[0]==w[0])
	{
		v[che[0]-1].first=w[1];
		v[che[1]-1].first=w[0];
	}
	else if(che[0]==w[1])
	{
		v[che[1]-1].first=w[1];
		v[che[0]-1].first=w[0];
	}
	else if(che[1]==w[0])
	{
		v[che[0]-1].first=w[0];
		v[che[1]-1].first=w[1];
	}
	else
	{
		v[che[0]-1].first=w[1];
		v[che[1]-1].first=w[0];
	}
	f(n)
	{
		cout<<v[i].first<<" ";
	}
	return 0;
}