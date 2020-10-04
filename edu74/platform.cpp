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
#define ll long long
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[])
{
	op;
	test(t)
	{
		t(n);
		t(m);
		ll int arr[m];
		std::vector<ll int> v;
		f(m)
		{
			cin>>arr[i];
			if(i!=0)
				v.pb(arr[i-1]-arr[i]);
		}
		v.pb(arr[m-1]);
		f(v.size())
			cout<<v[i]<<" ";
		cout<<endl;
		ll int ans=0;
		while(1)
		{
			if(v.size()==1 || v.size()==0)
				break;
			if(v[0]==1 && v[1]==1)
			{
				v.erase(v.begin());
				v.erase(v.begin());
			}
			else if(v[0]==1 || v[1]!=1)
			{
				ans++;
				v.erase(v.begin());
				v[0]--;
			}
			else
			{
				v[0]=1;
			}
		}
		cout<<ans<<endl;

	}
	return 0;
}