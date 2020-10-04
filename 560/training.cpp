#include<bits/stdc++.h>
#include<algorithm>
#define f(n) for(int i=0;i<n;i++)
#define g(n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	std::vector<int> v;
	f(n)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}

	sort(v.begin(),v.end());
	int d=0,p=0,ans=0;
	/*while(n--)
	{
		if(v.size()==0)
			break;

		if(v[0]>d)
		{
			ans++;
			v.erase(v.begin());
			d++;
		}

		else
		{
			v.erase(v.begin());
		}

	}
	while(p<v.size())
	{
		if(v[p]>p)
		{
			p++;
		}
		else
		{
			v.erase(v.begin()+p);
		}
	}*/

	int l=0;
	while(p<n)
	{
		if(v[p]>l)
			l++;
		else
			d++;

		p++;
	}
	cout<<n-d;
	return 0;
}