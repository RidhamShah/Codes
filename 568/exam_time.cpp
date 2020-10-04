#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n,m;
	cin>>n>>m;

	long long int s=0;
	std::vector<long long int> v;
	f(n)
	{
		long long int a;
		cin>>a;
		s+=a;
		if(s<=m)
		{
			cout<<"0 ";
		}
		else
		{
			sort(v.rbegin(),v.rend());
			long long int ss=s,f=0;
			g(v.size())
			{
				ss-=v[j];
				f++;
				if(ss<=m)
					break;
			}
			cout<<f<<" ";
		}
		v.push_back(a);
		//cout<<s;
	}
	return 0;
}