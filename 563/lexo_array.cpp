#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
using namespace std;

int main(int argc, char const *argv[])
{
	long int n;
	cin>>n;

	long int arr[n];
	bool flag=false,flag2=false;
	f(n)
	{
		cin>>arr[i];
		arr[i]%2==0 ? flag=true : flag2=true;
	}

	//cout<<flag<<flag2;
	if(flag&&flag2)
		sort(arr,arr+n);

	f(n)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}