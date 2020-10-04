#include<bits/stdc++.h>
#include<algorithm>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
using namespace std;

int main(long long int argc, char const *argv[])
{
	long long int t;
	cin>>t;

	while(t--)
	{
		long long int n;
		cin>>n;
		long long int arr[n];

		f(n)
		{
			cin>>arr[i];
		}

		sort(arr,arr+n);
		bool flag=true;
		
		long long int ans=arr[0]*arr[n-1];
		f(n/2 + n%2)
		{
			if(arr[i]*arr[n-1-i]!=ans)
			{
				flag=false;
				break;
			}
		}

		if(flag && n>1)
		{
			if(arr[n-1]%arr[n-2]==0)
				ans=arr[n-1];
		}
		flag ? cout<<ans<<endl : cout<<"-1\n";
	}
	return 0;
}