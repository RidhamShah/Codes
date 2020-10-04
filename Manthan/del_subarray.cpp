#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
//#include<boost/multiprecision/cpp_int.hpp>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define ff(a,n) for(long long int i=a;i<n;i++)
#define gg(a,n) for(long long int j=a;j<n;j++)
#define t(a) long long int a;cin>>a
#define pb push_back
#define mp make_pair
#define ll long long
#define op std::ios_base::sync_with_stdio(false)
//using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[])
{
	op;
	t(n);
	ll int arr[n];
	set<ll int> s;
	std::vector< pair<ll int,ll int> > v;
	f(n)
	{
		cin>>arr[i];
		v.pb(mp(arr[i],i));
		s.insert(arr[i]);
	}
	if(s.size()==n)
	{
		cout<<0;
		return 0;
	}
	sort(v.begin(), v.end());
	ll int brr[n]={0};
	ll int cnt=0;
	f(n-1)
	{
		if(v[i].first==v[i+1].first)
		{
			cnt++;
			if(brr[v[i].second]==2)
				brr[v[i].second]=3;
			else
				brr[v[i].second]=1;
			brr[v[i+1].second]=2;
		}
	}
	
	//cout<<endl;
	bool f1=false,f2=false,ff1=false,ff2=false;
	ll int st1,st2,en1,en2;
	f(n)
	{
		if(!f1 && (brr[i]==1||brr[i]==3))
		{
			st1=i;
			f1=true;
		}
		if(!f2 && (brr[i]==2||brr[i]==3))
		{
			st2=i;
			f2=true;
		}
	}
	f(n)
	{
		if(!ff1 && (brr[i]==1||brr[i]==3))
		{
			en1=i;
			//f1=true;
		}
		if(!ff2 && (brr[i]==2||brr[i]==3))
		{
			en2=i;
			//f2=true;
		}
	}
	//cout<<en1<<st1<<en2<<st2;
	cout<<min(en1-st1,en2-st2)+1;

}