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
#define all(a) a.begin(),a.end()
#define ent "\n"
#define pri(a,n) f(n){cout<<a[i]<<" ";}cout<<ent
#define cas(i) cout<<"Case #"<<i+1<<": "
#define pb push_back
#define mp make_pair
#define F first
#define S second
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
    lli qrr[n];
    std::vector< pair<lli,pair<lli,lli>> > v;
    f(n)
    	cin>>qrr[i];
    t(m);
    f(m)
    {
    	t(a);
    	t(b);
    	t(c);
    	v.pb(mp(c,mp(a,b)));
    }
    lli che[n+1]={0};
    sort(all(v));
    lli cost=0;
    f(v.size())
    {
    	if(che[v[i].S.S]==0){
    		che[v[i].second.second]=v[i].second.first;
    		cost+=v[i].F;
    	}
    }
    lli cnt=0;
    f(n+1)
    {
    	if(che[i]==0)
    		cnt++;
    }
    cnt==2 ? cout<<cost : cout<<"-1";
    
    return 0;
}
