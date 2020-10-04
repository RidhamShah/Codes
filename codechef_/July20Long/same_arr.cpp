#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#include<iostream>
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
#define cas(i) "Case #"<<i+1<<": "
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define mod 1000000007  
#define ll long long 
#define lli long long int
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
using namespace std;

int main(int argc, char const *argv[])
{
    op;
    test(t)
    {
    	t(n);
    	lli arr[n],brr[n],mn=1000000000;
    	unordered_map<lli,lli> m;
    	unordered_map<lli,pair<lli,lli> > ma,mb;
    	f(n)
    	{
    		cin>>arr[i];
    		m[arr[i]]++;
    		ma[arr[i]].S++;
    	}
    	f(n)
    	{
    		cin>>brr[i];
    		m[brr[i]]++;
    		mb[brr[i]].S++;
    	}
    	
    	bool flag=false;
    	std::vector<lli> v;
    	f(n)
    	{
    		if(m[arr[i]]%2!=0 || m[brr[i]]%2!=0)
    		{
    			flag=true;
    		}
    		if(m[arr[i]]%2==0)
    			mn=min(mn,arr[i]);
    		if(m[brr[i]]%2==0)
    			mn=min(mn,brr[i]);
    	}
    	if(flag)
    	{
    		cout<<"-1\n";
    		continue;
    	}
    	f(n)
    	{
    		if(ma[arr[i]].F==0 && (ma[arr[i]].S-mb[arr[i]].S)>0)
    		{
    			g((ma[arr[i]].S-mb[arr[i]].S)/2)
    				v.pb(arr[i]);
    		}
    		ma[arr[i]].F=1;
    	
    		if(mb[brr[i]].F==0 && (mb[brr[i]].S-ma[brr[i]].S)>0)
    		{
    			g((mb[brr[i]].S-ma[brr[i]].S)/2)
    				v.pb(brr[i]);
    		}
    		mb[brr[i]].F=1;
    	}
    	sort(all(v));
    	lli ans=0;
    	f(v.size()/2){
    		ans+=min(2*mn,v[i]);
    	}
    	cout<<ans<<ent;
    }
    return 0;
}