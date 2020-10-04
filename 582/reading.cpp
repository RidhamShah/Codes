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
	t(t);
	while(t--)
	{
		t(m);
		t(n);
		ll int arr[10]={0,45,40,45,40,25,40,45,40,45};
		ll int d=m/n,l=n%10,ans=0,k=0;
		ans+=((d/10)*arr[l]);
		f(d%10)
		{
			k+=l;
			ans+=(k%10);
		}
		cout<<ans<<endl;
	}
	return 0;
}