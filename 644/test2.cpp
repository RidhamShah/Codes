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
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
using namespace std;


int main(int argc, char const *argv[])
{
    op;
    t(a);
    t(b);
    if(a==0)
    	a=65;
    if(b==0)
    	b=65;
    if((a>=27 && a<=54)||54%a==0 || 52%b==0 || a==27 || b==26 || a==54 || b==52 || b==13 || b==2 || a==3 || a==6 || a==9 || a==1 || b==1 || b==39)
    	cout<<"IN\n";
    else
    	cout<<"OUT\n";
    return 0;
}
