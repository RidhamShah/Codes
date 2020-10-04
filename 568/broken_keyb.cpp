#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=1;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	while(n--)
	{
		bool flag=true;
		string s,ss;
		cin>>s>>ss;

		std::vector< pair<char,int> > v,w;

		char c=s[0];
		int f=1;
		f(s.size())
		{
			if(c==s[i])
			{
				f++;
			}
			else
			{
				v.push_back( make_pair(c,f) );
				c=s[i];
				f=1;
			}
		}
		v.push_back( make_pair(c,f) );


		char cc=ss[0];
		int ff=1;
		f(ss.size())
		{
			if(cc==ss[i])
			{
				ff++;
			}
			else
			{
				w.push_back( make_pair(cc,ff) );
				cc=ss[i];
				ff=1;
			}
		}
		w.push_back( make_pair(cc,ff) );

		// g(v.size())
		// {
		// 	cout<<v[j].first<<v[j].second;
		// }
		// cout<<endl;
		// g(w.size())
		// {
		// 	cout<<w[j].first<<w[j].second;
		// }
		if(v.size()==w.size())
		{
			g(v.size())
			{
				if(v[j].first!=w[j].first || v[j].second>w[j].second)
				{
					//cout<<v[j].first<<" "<<w[j].first<<" "<<v[j].second<<" "<<w[j].second;
					flag=false;
					break;
				}
			}
		}
		else
			flag=false;

		flag ? cout<<"YES\n"  :cout<<"NO\n";
	}
	return 0;
}