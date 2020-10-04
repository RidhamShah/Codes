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
	op;
	test(t)
	{
		t(n);
		lli arr[n];
		f(n)
		{
			cin>>arr[i];
		}
		bool flag=false;
		f(n-1)
		{
			if(abs(arr[i]-arr[i+1])>1){
				cout<<"YES\n";
				cout<<i+1<<" "<<i+2<<endl;
				flag=true;
				break;
			}
		}
		if(!flag)
			cout<<"NO\n";
	}
	return 0;

}