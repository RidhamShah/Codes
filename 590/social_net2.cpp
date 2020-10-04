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
	t(k);
	std::vector<ll int> v;
	f(n)
	{
		t(a);
		v.pb(a);
	}
	f(v.size()-1)
	{
		set<ll int> s;
		for(ll int j=i+1;j<v.size();j++)
		{
			if(v[i]==v[j]){
				v.erase(v.begin()+j);
				j--;
				continue;
			}
			else{
				s.insert(v[j]);
				if(s.size()==k)
					break;
			}
		}
	}
	ll int cc;
	if(v.size()>k)
		cc=k;
	else
		cc=v.size();
	cout<<cc<<endl;
	f(cc)
		cout<<v[v.size()-1-i]<<" ";
	return 0;
}