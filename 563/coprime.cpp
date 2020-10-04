#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=2;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
using namespace std;

int main()
{
	long long int n;
	cin>>n;

	long long int arr[n+1]={0};

	long long int st=0;

	for(long long int i=2;i<n+1;i++)
	{
		if(arr[i]==0)
		{
			st++;
			for(long long int j=i;j<n+1;j+=i)
			{
				arr[j]=st;
			}
		}
	}
	f(n+1)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}