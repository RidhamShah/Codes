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
    string s;
    cin>>s;
    map<char,lli> mp,mp1;
    lli cnt=0,cnt2=0;
    f(n)
    {
    	if(mp[s[i]]==0)
    		cnt++;
    	mp[s[i]]++;
    }
    lli i=0,l=0,mn=n;
   
    f(n)
    {
    	mp1[s[i]]++;
    	if(mp1[s[i]]==1)
    		mn=i-l+1;

    	while(mp1[s[l]]>1 && l<i)
    	{
    		mp1[s[l]]--;
    		l++;
    	}
    	mn=min(mn,i-l+1);
    }
    cout<<mn;
    return 0;
}
