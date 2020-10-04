#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n,q;
	cin>>n;

	long long int arr[n];
	f(n)
		cin>>arr[i];

	cin>>q;

	std::vector< pair<long long int,long long int> > v,w;
	f(q)
	{
		long long int a;
		cin>>a;
		v.push_back(make_pair(a,i));
	}

	sort(v.begin(),v.end());

	long long int che=arr[0],ans=1;
	f(q)
	{
		bool flag=true;
		while(flag)
		{
			if(v[i].first<=che)
			{
				w.push_back(make_pair(v[i].second,ans));
				flag=false;
			}
			else
			{
				che+=arr[ans];
				ans++;
			}
		}
	}

	sort(w.begin(),w.end());

	f(q)
	{
		cout<<w[i].second<<endl;
	}
	return 0;
}