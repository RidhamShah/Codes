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
	int arr[k+1]={0};
	int l=(n/2);
	if(n%2!=0)
		l++;
	//cout<<l;
	f(n)
	{
		t(a);
		arr[a]++;
		if(arr[a]==2)
		{
			arr[a]=0;
			l--;
		}
	}
	
	f(k+1)
	{
		if(arr[i+1]==1)
			l--;
	}
	cout<<n+l;
	return 0;
}