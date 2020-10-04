#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define t(a) long long int a;cin>>a
using namespace std;

int main(int argc, char const *argv[])
{
	t(n);
	t(k);
	long long int arr[n];
	std::vector<long long int> v;
	f(n)
	{
		cin>>arr[i];
		v.push_back(arr[i]);
	}
	if(k>=n)
	{
		sort(v.rbegin(),v.rend());
		cout<<v[0];
	}
	else
	{
		long long int a=arr[0],b=1;
		aa:
		for(long long int i=b;i<min(k+b,n);i++)
		{
			if(arr[i]>a)
			{
				a=arr[i];
				b=i;
				goto aa;
			}
		}
		cout<<a;
	}
	return 0;
}