#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	long long int n;
	cin >> n;

	long long int arr[n];
	std::vector<long long int> v;

	for(long long int i=0;i<n;i++)
	{
		cin >> arr[i];
		v.push_back(arr[i]);
	}
	for(long long int i=0;i<n;i++)
	{
		v.push_back(arr[i]);
	}

	long long int mx=0,cnt=0;
	for(long long int i=0;i<2*n;i++)
	{
		if(v[i]==1)
		{
			cnt++;
		}
		else
		{
			mx=max(mx,cnt);
			cnt=0;
		}
	}

	cout << mx;
}