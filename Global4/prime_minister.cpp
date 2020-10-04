#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=1;j<n;j++)
#define t(a) long long int a;cin>>a
using namespace std;

int main(int argc, char const *argv[])
{
	t(n);
	long long int arr[n],to=0;
	f(n)
	{
		cin>>arr[i];
		to+=arr[i];
	}
	long long int ans=arr[0];
	std::vector<long long int> v;
	v.push_back(1);
	bool flag=false;
	g(n)
	{
		if(arr[j]<=arr[0]/2)
		{
			ans+=arr[j];
			v.push_back(j+1);
		}

		if(ans>to/2)
		{
			flag=true;
			cout<<v.size()<<endl;
			f(v.size())
				cout<<v[i]<<" ";
			break;
		}
	}
	if(!flag)
		cout<<"0";
	return 0;
}