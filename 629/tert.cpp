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
    test(t)
    {
    	t(n);
    	string s;
    	cin>>s;
    	lli arr[n]={0},brr[n]={0};
    	bool flag=false;
    	f(n)
    	{
    		if(flag)
    		{
    			if(s[i]=='1')
    			{
    				arr[i]=0;
    				brr[i]=1;
    			}
    			else if(s[i]=='2')
    			{
    				arr[i]=0;
    				brr[i]=2;
    			}
    		}
    		else
    		{
    			if(s[i]=='1')
    			{
    				arr[i]=1;
    				brr[i]=0;
    				flag=true;
    			}
    			else if(s[i]=='2')
    			{
    				arr[i]=1;
    				brr[i]=1;
    			}

    		}
    	}
    	f(n)
    		cout<<arr[i];
    	cout<<ent;
    	f(n)
    		cout<<brr[i];
    	cout<<ent;
    }
    return 0;
}