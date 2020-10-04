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

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if ((n % i == 0) || (n % (i + 2) == 0))
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    op;
    test(t)
    {
    	t(n);
    	t(k);
    	if( isPrime(n) )
    	{
    		if(k<n)
    			cout<<n<<ent;
    		else
    			cout<<"1\n";
    	}
    	else{
	    	ff(1,n)
	    	{
	    		if(n%i==0)
	    		{
	    			lli ans=n/i;
	    			if(ans<=k){
	    				cout<<i<<ent;
	    				goto aa;
	    			}
	    		}
	    	} 
	    	cout<<n<<ent;
    	}
    	aa:;
    }
    return 0;
}
