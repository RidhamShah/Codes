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

int main(int argc, char const *argv[])
{
    op;
    test(t)
    {
    	t(n);
        string s[n];
    	lli arr[n+1][n+1]={0};
    	f(n)
    	{
            cin>>s[i];
    	}
    	bool flag=true;
        f(n)
            g(n)
                arr[i][j]=s[i][j]-'0';
    	f(n)
    	{
    		g(n)
    		{
    			if(i==n-1 || j==n-1)
    				continue;
    			if(arr[i][j]==1)
    			{
    				if(arr[i+1][j]==1 || arr[i][j+1]==1)
    				{

    				}
    				else
    				{
                        //cout<<i<<j;
    					flag=false;
    					goto aa;
    				}

    			}
    		}
    	}
    	aa:;
    	flag ? cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}