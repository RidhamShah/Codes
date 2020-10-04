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
	long long int arr[n];
	f(n)
	{
		cin>>arr[i];
	}	
	sort(arr,arr+n);
	long long int a=arr[0],b=arr[n-1];
	long long int aa=0,bb=0;
	f(n)
	{
		if(arr[i]==a)
			aa++;
		else
			break;
	}
	f(n)
	{
		if(arr[n-1-i]==b)
			bb++;
		else
			break;
	}
	long long int cc;
	a==b ? cc=aa*(aa-1)/2 : cc=aa*bb; 
	cout<<b-a<<" "<<cc;
	return 0;
}