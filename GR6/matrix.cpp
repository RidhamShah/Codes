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
	t(x);
	t(y);
	if(x==y && x==1)
		cout<<"0\n";
	else if(x!=1 && y==1)
	{
		f(x)
		{
			cout<<i+2<<endl;
		}
	}
	else
	{
		ff(1,x+1)
		{
			gg(x+1,x+y+1)
			{
				cout<<i*j<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}