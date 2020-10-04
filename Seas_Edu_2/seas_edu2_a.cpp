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
    lli arr[n],brr[n];
    f(n)
    {
    	cin>>arr[i]>>brr[i];
    }
    bool rflag = false;
    f(n)
    {
    	if(arr[i]!=brr[i])
    	{
    		rflag = true;
    		break;
    	}
    }
    bool mflag= true;
    if(!rflag)
    {
    	f(n-1)
    	{
    		if(arr[i]<arr[i+1])
    		{
    			mflag=false;
    		}
    	}
    }
    if(rflag)
    	cout<<"rated";
    else
    {
    	if(mflag)
    		cout<<"maybe";
    	else
    		cout<<"unrated";
    }
    return 0;
}
