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
    	string s;
    	cin>>s;
    	lli odd=0,ev=0,in=-1;
    	f(s.size())
    	{
    		if((s[i]-'0')%2)
    		{
    			odd++;
    			if(odd==2)
    			{
    				in=i;
    				break;
    			}
    		}	
    	}
    	if(in!=-1)
    	{
    		f(in+1)
    		{
    			cout<<s[i];
    		}
    		cout<<"\n";
    	}
    	else
    		cout<<"-1\n";
    }
    return 0;
}
