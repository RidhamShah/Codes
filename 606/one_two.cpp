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
	test(t)
	{
		string a;
		cin>>a;
		lli i=0;
		std::vector< pair<char,ll int> > v;
		std::vector<lli> val;
		lli cnt=1;
		char che=a[0];
		f(a.size()-1)
		{
			if(a[i+1]==che)
				cnt++;
			else
			{
				v.pb(mp(che,cnt));
				che=a[i+1];
				cnt=1;
			}
		}
		v.pb(mp(che,cnt));
		lli ans=0;
		std::vector<lli> av;
		//val.pb(v[0].second);
		f(v.size())
		{
			val.pb(v[i].second);
		}
		f(v.size()-1)
		{
			val[i+1]+=val[i];
		}
		// f(v.size())
		// 	cout<<v[i].first;
		// cout<<endl;
		// f(v.size())
		// 	cout<<v[i].second;
		// if(v[i].first=='o'&&v[i+1].first=='n'&&v[i+2].first=='e')
		// 	cout<<"ya";
		// cout<<endl;
		f(v.size()-2)
		{
			if(v[i].first=='o'&&v[i+1].first=='n'&&v[i+2].first=='e' && v[i+1].second==1)
			{
				if(v[i].second==v[i+1].second==v[i+2].second)
				{
					av.pb(val[i]+1);
					ans+=v[i].second;
					v[i].first=='a';
				}
				else if(v[i].second<=v[i+1].second && v[i].second<=v[i+2].second)
				{
					av.pb(val[i]+1);
					ans+=v[i].second;
					v[i].first='a';
				}
				else if(v[i+1].second<=v[i].second && v[i+1].second<=v[i+2].second)
				{
					av.pb(val[i+1]+1);
					ans+=v[i+1].second;
					v[i+1].first='a';
				}
				else if(v[i+2].second<=v[i].second && v[i+2].second<=v[i+1].second)
				{
					av.pb(val[i+2]+1);
					ans+=v[i+2].second;
					v[i+2].first='a';
				}
			}
			else if(v[i].first=='t'&&v[i+1].first=='w'&&v[i+2].first=='o' && v[i+1].second==1)
			{
				if(v[i].second==v[i+1].second==v[i+2].second)
				{
					av.pb(val[i+2]+1);
					ans+=v[i+2].second;
					v[i+2].first='a';
				}
				else if(v[i].second<=v[i+1].second && v[i].second<=v[i+2].second)
				{
					av.pb(val[i]+1);
					ans+=v[i].second;
					v[i].first='a';
				}
				else if(v[i+1].second<=v[i].second && v[i+1].second<=v[i+2].second)
				{
					av.pb(val[i+1]+1);
					ans+=v[i+1].second;
					v[i+1].first='a';
				}
				else if(v[i+2].second<=v[i].second && v[i+2].second<=v[i+1].second)
				{
					av.pb(val[i+2]+1);
					ans+=v[i+2].second;
					v[i+2].first='a';
				}
			}
		}
		cout<<ans<<endl;
		f(av.size())
		{
			cout<<av[i]-1<<" ";
		}
		cout<<endl;
	}
	return 0;
}