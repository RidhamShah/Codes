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
	std::vector<ll int> v;
	int arr[n];
	f(n)
		cin>>arr[i];

	sort(arr,arr+n);
	v.pb(arr[0]);
	f(n-1)
	{
		bool flag=true;
		g(v.size())
		{
			if(arr[i+1]%v[j]==0)
			{
				flag=false;
				break;
			}
		}
		if(flag)
			v.pb(arr[i+1]);
	}
	cout<<v.size();
	return 0;
}