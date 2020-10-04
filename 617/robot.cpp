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
    test(t)
    {
    	t(n);
    	string s;
    	cin>>s;
    	lli x=0,y=0;
    	map< pair<lli,lli>, lli> mm;
    	mm[mp(0,0)]=n;
    	std::vector<lli> le,rr;
    	std::vector< pair<lli,lli> > dif;
    	bool flag=false;
    	lli inc=0;
    	f(n)
    	{
    		if(s[i]=='L')
    			x++;
    		if(s[i]=='R')
    			x--;
    		if(s[i]=='U')
    			y++;
    		if(s[i]=='D')
    			y--;


    		if(mm[mp(x,y)]!=0)
    		{
    			le.pb(mm[mp(x,y)]-n+1);
    			rr.pb(i+1);
    			dif.pb(mp(i+n-mm[mp(x,y)],inc));
    			inc++;
    			mm[mp(x,y)]=n+i+1;
    		}
    		else
    			mm[mp(x,y)]=n+i+1;
    	}
    	if(le.size()==0)
    		cout<<-1<<endl;
    	else
    	{
    		sort(dif.begin(),dif.end());
    		cout<<le[dif[0].second]<<" "<<rr[dif[0].second]<<endl;
    	}
    }
    return 0;
}
