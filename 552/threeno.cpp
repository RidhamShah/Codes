#include<bits/stdc++.h>
#include<algorithm>
#define fr(i,n) for(long long int i=0;i<n;i++)
using namespace std;

int main()
{
	//long long int a,b,c,d
	long long int arr[4];
	fr(i,4)
	{
		cin>>arr[i];
	}

	sort(arr,arr+4,greater<long long int>() );
	cout<<arr[0]-arr[1]<<" "<<arr[0]-arr[2]<<" "<<arr[0]-arr[3];
}