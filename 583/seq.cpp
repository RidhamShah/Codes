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
	string s;
	cin>>s;
	std::vector<int> v;
	if(n%2==1){
		cout<<"No";
		return 0;
	}
	f(n)
	{
		if(s[i]==')')
		{
			if(v.size())
			{
				if(v[v.size()-1]==2)
				{
					v.pop_back();
				}
				else
				{
					v.pb(1);
				}
			}
			else
			{
				v.pb(1);
			}
		}
		if(s[i]=='(')
			v.pb(2);
	}
	//f(v.size())
	//	cout<<v[i];
	int i=1;
	/*while(i!=v.size())
	{
		if(v[i]==1 && v[i-1]==2)
		{
			v.erase(v.begin()+i-1);
			v.erase(v.begin()+i-1);
			i--;
		}
		i++;
	}*/
	if(v.size()==0)
		cout<<"Yes";
	else if(v.size()==2 && v[0]!=v[1])
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}