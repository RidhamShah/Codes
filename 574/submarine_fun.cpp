#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long 	 j=n-1;j>=0;j--)
#define t(a) long long int a;cin>>a
using namespace std;

int main(int argc, char const *argv[])
{
	t(n);
	string arr[n];
	f(n)
	{
		cin>>arr[i];
	}
	long long int l=arr[0].size();

	long long int a=1,b=10;

	long long int sum=0,ans=0;
	g(l)
	{
		f(n)
		{
			sum+=arr[i][j]-'0';
		}

		ans+=(sum*n*a)%998244353;
		//cout<<sum<<" ";
		if(ans>998244353)
			ans-= 998244353;
		ans+=(sum*n*b)%998244353;
		if(ans> 998244353)
			ans-= 998244353; 
		a*=100;
		b*=100;
		sum=0;
	}
	cout<<ans;
	return 0;
}