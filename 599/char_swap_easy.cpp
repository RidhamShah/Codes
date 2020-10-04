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
#define ll long long int
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
using namespace std;
 
int main(int argc, char const *argv[])
{
	test(t)
	{
		t(n);
		string a,b;
		cin>>a>>b;
		int has[26]={0};
		std::vector<int> v;
		ll cnt=0;
		f(n)
		{
			has[a[i]-'a']++;
			has[b[i]-'a']++;

			if(a[i]!=b[i]){
				cnt++;
				v.pb(i);
			}
			
		}
		bool flag=false;
		f(26)
		{
			if(has[i]%2==1)
			{
				flag=true;
				break;
			}
		}
		//cout<<flag<<cnt;
		if(flag)
			cout<<"No\n";
		else
		{
			if(cnt==0)
			{
				cout<<"Yes\n";
			}
			else if(cnt==2)
			{
				//cout<<v[0]<<v[1];
				if(a[v[0]]==a[v[1]] && b[v[0]==b[v[1]]])
					cout<<"Yes\n";
				else
					cout<<"No\n";
			}
			else
				cout<<"No\n";
		}
	}
	return 0;
}