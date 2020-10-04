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
	if(n==1 || n==2 || n==3)
	{
		cout<<n;
		return 0;
	}
	long long int arr[n+1]={0};

	for(long long int i=2;i<n/2;i++)
	{
		if(i*i>n)
			break;
		for(long long int j=i*i;j<n+1;j+=i*i)
			arr[j]=1;
	}

	for(long long int i=n;i>0;i--)
	{
		if(arr[i]==0 && n%i==0)
		{
			cout<<i;
			return 0;
		}
	}
	return 0;
}