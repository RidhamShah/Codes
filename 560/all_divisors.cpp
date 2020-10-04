#include<bits/stdc++.h>
#include<algorithm>
#define f(n) for(int i=0;i<n;i++)
#define g(n) for(int j=0;j<n;j++)
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];

		f(n)
		{
			cin>>arr[i];
		}

		sort(arr,arr+n);
		bool flag=true;
		int ans=arr[0]*arr[n-1];
		f(n)
		{
			if(ans%arr[i]!=0)
			{
				flag=false;
				break;
			}
		}

		if(flag)
		{
			if(arr[n-1]%arr[n-2]==0)
				ans=arr[n-1];
		}
		/*int ans=arr[0]*arr[n-1];
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
		}*/
		flag ? cout<<ans<<endl : cout<<"-1\n";
	}
	return 0;
}