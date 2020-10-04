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
	std::vector<ll int> v,w;
	f(n)
	{
		t(a);
		v.pb(a);

	}


	for(int i=0;i<v.size();i++)
	{
		ll int l=k;
		for(int j=i+1;j<i+1+l;j++)
		{
			if(j>v.size()||j==i)
				break;
			if(v[i]==v[j]){
				v.erase(v.begin()+j);
				l--;
			}
		}
	}
	for(int i=0;i<v.size();i++)
	{
		ll int l=k;
		for(int j=i+1;j<i+1+l;j++)
		{
			if(j>v.size() || j==i)
				break;
			if(v[i]==v[j]){
				v.erase(v.begin()+j);
				l--;
			}
		}
	}
	//f(v.size())
	//	cout<<v[i];

	ll int cc;
	if(v.size()>k)
		cc=k;
	else
		cc=v.size();
	cout<<cc<<endl;
	if(v.size()>k)
		cc=k;
	else
		cc=v.size();
	f(cc)
		cout<<v[v.size()-i-1]<<" ";
	
	return 0;
}