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
	string s;
	cin>>s;
	lli b=0,w=0;
	f(n)
	{
		if(s[i]=='B')
			b++;
		else
			w++;
	}
	if(b%2 && w%2){
		cout<<"-1\n";
		return 0;
	}
	if(b==0 || w==0){
		cout<<"0";
		return 0;
	}
	if(b%2==0 && w%2==0)
	{
		std::vector<lli> v;
		f(n-1)
		{
			if(s[i]=='W')
			{
				v.pb(i+1);
				if(s[i+1]=='B')
					s[i+1]='W';
				else
					s[i+1]='B';
			}
		}
		cout<<v.size()<<endl;
		f(v.size())
		{
			cout<<v[i]<<" ";
		}
		return 0;
	}
	if(w%2==0 && b%2)
	{
		std::vector<lli> v;
		f(n-1)
		{
			if(s[i]=='W')
			{
				v.pb(i+1);
				if(s[i+1]=='B')
					s[i+1]='W';
				else
					s[i+1]='B';
			}
		}
		cout<<v.size()<<endl;
		f(v.size())
		{
			cout<<v[i]<<" ";
		}
		return 0;
	}
	else
	{
		std::vector<lli> v;
		f(n-1)
		{
			if(s[i]=='B')
			{
				v.pb(i+1);
				if(s[i+1]=='W')
					s[i+1]='B';
				else
					s[i+1]='W';
			}
		}
		cout<<v.size()<<endl;
		f(v.size())
		{
			cout<<v[i]<<" ";
		}
	}


	return 0;
}