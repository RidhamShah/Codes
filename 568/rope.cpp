#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[3];
	int a,b,c,d;
	cin>>arr[0]>>arr[1]>>arr[2]>>d;

	sort(arr,arr+3);
	cout<<(arr[2]-arr[1]>d ? 0 : d-arr[2]+arr[1])+(arr[1]-arr[0]>d ? 0 : d-arr[1]+arr[0]);
	return 0;
}