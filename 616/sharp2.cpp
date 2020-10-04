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
    test(t)
    {
    	t(n);
    	lli arr[n],brr[n],in;
    	bool flag=true;
    	f(n)
    	{
    		lli che=0;
    		cin>>arr[i];
    	}
    	if(n%2)
    	{
    		in=n/2;
    	}
    	else
    	{
    		if(arr[n/2]>arr[(n/2)-1])
    			in=n/2;
    		else
    			in=(n/2)-1;
    	}
    	brr[in]=max(in,n-in-1);
    	f(in)
    	{
    		brr[i]=i;
    	}
    	for(ll i=n-1;i>in;i--)
    	{
    		brr[i]=(n-1)-i;
    	}
    	f(n)
    	{
    		if(arr[i]<brr[i])
    		{
    			flag=false;
    			break;
    		}
    	}
    	flag?cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}
