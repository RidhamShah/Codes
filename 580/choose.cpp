#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define t(a) long long int a;cin>>a
#define op std::ios_base::sync_with_stdio(false)
using namespace std;

int main(int argc, char const *argv[])
{
	op;
	t(a);
	int arr[a];
	f(a)
	{
		cin>>arr[i];
	}
	t(b);
	int brr[b];
	f(b)
		cin>>brr[i];

	sort(arr,arr+a);
	sort(brr,brr+b);
	cout<<arr[a-1]<<" "<<brr[b-1];
	return 0;
}