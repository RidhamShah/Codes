#include<bits/stdc++.h>
#include<algorithm>
#define f(n) for(int i=0;i<n;i++)
#define g(n) for(int j=0;j<n;j++)
using namespace std;

int main(int argc, char const *argv[])
{
	int n,x,y,ans=0;
	cin>>n>>x>>y;

	string s;
	cin>>s;

	std::vector<char> v;
	for(int i=s.size()-1;i>=s.size()-x;i--)
	{
		v.push_back(s[i]);
	}

	f(v.size())
	{
		if(i==y)
		{
			ans+=(v[i]!='1');
		}
		else
		{
			ans+=(v[i]!='0');
		}
	}
	cout<<ans;
	return 0;
}