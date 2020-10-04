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


void dfs(ll int node , vector<ll int> gr[], ll int v[] , vector<lli> &che, vector<lli> &val, ll int arr[] )
{
	v[node]=1;
	//cout<<"n: "<<node;
	che.pb(node);
	//cout<<che.size()<<ent;
	val.pb(arr[node-1]);
	for(int i : gr[node])
	{
		//cout<<" :"<<gr[node][i];
		if(!v[i])
		{
			dfs(i, gr , v, che, val, arr);
		}
	}
}

int main(int argc, char const *argv[])
{
    op;
    t(n);
    t(m);
    lli arr[n],brr[n]={0};
    f(n)
    	cin>>arr[i];
    std::vector<lli> gr[n+1];
    lli v[n+1]={0};
    f(m)
    {
    	t(a);
    	t(b);
    	gr[a].pb(b);
    	gr[b].pb(a);
    }
    std::vector<lli> che,val;
    ff(1,n+1)
   	{
   		if(v[i]==0)
   		{
   			dfs(i,gr,v,che,val,arr);
   			//cout<<"che : "<<che.size()<<ent;
   			
   			sort(all(che));
   			sort(val.rbegin(),val.rend());
   			g(che.size())
   			{
   				brr[che[j]-1]=val[j];
   			}
   			che.clear();
   			val.clear();
   		}
   	}
   	f(n)
   	{
   		if(brr[i]==0)
   			brr[i]=arr[i];
   		cout<<brr[i]<<" ";
   	}
    return 0;
}
