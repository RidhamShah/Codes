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
    test(t){
    t(n);
    t(s);
    t(c);
    lli arr[c];
    map<lli,lli> m;
    f(c){

    	cin>>arr[i];
    	m[arr[i]]=1;
    }
    lli i=0;
    while(1)
    {
    	if(m[s+i]==0 && s+i<=n)
    	{
    		cout<<i<<endl;
    		break;
    	}
    	else if(m[s-i]==0 && s-i>0)
    	{
    		cout<<i<<endl;
			break;
    	}

    	i++;
    }
}

    return 0;
}
