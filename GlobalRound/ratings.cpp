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
#define ll long long int
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[])
{
	t(n);
	ll arr[n];
	std::vector<int> p,ne;
	ll sum=0;
	f(n)
	{
		t(a);
		if(a%2!=0 && a<0)
		{
			ne.pb(i);
		}
		else if(a%2!=0 && a>0)
		{
			p.pb(i);
		}
		arr[i]=a/2;
		sum+=arr[i];
	}

	if(sum<0)
	{
		f(0-sum)
		{
			arr[p[i]]++;
		}
	}
	else if(sum>0)
	{
		f(sum)
		{
			arr[ne[i]]--;
		}
	}
	
	f(n)
		cout<<arr[i]<<endl;
	return 0;
}