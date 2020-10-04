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
#define ll long long int
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[])
{
	op;
	test(t)
	{
		t(n);
		t(k);
		t(d);
		ll arr[n];
		unordered_map<ll,ll> fre;
		//ll fre[k+1]={0};
		ll ans[n];
		ll cnt=0,fans=1,ffans;
		f(n)
		{
			cin>>arr[i];
			fre[arr[i]]++;
			if(fre[arr[i]]==1)
				cnt++;
			if(i==d-1)
				fans=cnt;
			if(i-d>=0)
			{
				fre[arr[i-d]]--;
				if(fre[arr[i-d]]==0)
					cnt--;
				fans=min(fans,cnt);
			}
		}
		//cout<<fans<<end;
		/*
		f(n-d+1)
		{	
			set<int> s;
			g(d)
			{
				s.insert(arr[i+j]);
			}
			ll l=s.size();
			ffans=min(ffans,l);
		}*/
		cout<<fans<<endl;
	}
	return 0;
}