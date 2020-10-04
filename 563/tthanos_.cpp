#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
using namespace std;

int main(int argc, char const *argv[])
{
	int a;
	cin>>a;

	int arr[2*a],st=0,en=0;
	f(2*a)
	{
		cin>>arr[i];
		i<a ? st+=arr[i] : en+=arr[i];
	}

	bool flag=false;
	f(a)
	{
		if(st!=en)
		{
			flag=true;
			break;
		}
		g(a)
		{
			if(arr[i]!=arr[j+a])
			{
				flag=true;
				int temp=arr[i];
				arr[i]=arr[j+a];
				arr[j+a]=temp;
				goto aa;
			}
		}
	}

	aa:
	if(flag)
	{
		f(2*a)
		{
			cout<<arr[i]<<" ";
		}
	}
	else
		cout<<"-1";
	return 0;
}