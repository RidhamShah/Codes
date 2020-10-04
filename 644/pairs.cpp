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
    test(T)
    {
    	t(n);
    	lli arr[n];
    	lli e=0,o=0;
    	f(n){
    		cin>>arr[i];
    		if(arr[i]%2==0)
    			e++;
    		else
    			o++;
    	}
    	sort(arr,arr+n);
    	if(e%2==0 && o%2==0)
    		cout<<"YES\n";
    	else
    	{
    		bool flag=false;
    		f(n-1)
    			if(arr[i+1]-arr[i]==1)
    				flag=true;
    		flag?cout<<"YES\n":cout<<"NO\n";
    	}
    }
    return 0;
}
