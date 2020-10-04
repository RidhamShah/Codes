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
	t(n);
	f(n)
	{
		string a;
		cin>>a;
		bool f0=false;
		lli sum=0,fe=0;
		f(a.size())
		{
			if(a[i]=='0')
				f0=true;
			if((a[i]-'0')%2==0)
				fe++;
			sum+=a[i]-'0';
		}
		if(fe>1 && f0 && sum%3==0)
			cout<<"red\n";
		else
			cout<<"cyan\n";
	}
	return 0;
}