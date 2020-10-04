using namespace std;
//using namespace boost::multiprecision;

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
#define pri(a,n) f(n){cout<<a[i];}cout<<endl
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
    t(a);
    t(b);
    t(k);
    lli arr[n],brr[n],ans=0;
    f(n)
    {
    	cin>>arr[i];
    	brr[i]=arr[i]%(a+b);
    	if(brr[i]==0)
    		brr[i]+=(a+b);
    }
    f(n)
    {
    	if(brr[i]>a)
    	{
    		if(brr[i]%a==0)
    			brr[i]-=a;
    		brr[i]=brr[i]/a;
    	}
    	else
    		brr[i]=0;
    }
    sort(brr,brr+n);
    f(n)
    {
    	if(brr[i]==0)
    		ans++;
    	else if(brr[i]<=k)
    	{
    		ans++;
    		k-=brr[i];
    	}
    }
    cout<<ans<<endl;

    return 0;
}
