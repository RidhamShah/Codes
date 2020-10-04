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
	if(n==1)
	{
		t(a);
		t(b);
		cout<<max(a,b);
		return 0;
	}

	else if(n==2)
	{
		t(a);
		t(b);
		t(c);
		t(d);
		cout<<(max(a+d,b+c));
		return 0;
	}
	long long int arr[n],brr[n];

	f(n)
	{
		cin>>arr[i];
	}
	f(n)
	{
		cin>>brr[i];
	}

	arr[n-2]+=brr[n-1];
	brr[n-2]+=arr[n-1];

	for(long long int i=n-3;i>=0;i--)
	{
		arr[i]+=max(brr[i+1],brr[i+2]);
		brr[i]+=max(arr[i+1],arr[i+2]);
	}

	cout<<max(arr[0],brr[0]);
	return 0;
}