#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n,s,e;
	cin>>n>>s>>e;

	bool flag=true;
	long long int cnt=0;
	long long int arr[n+1],che[n+1]={0};
	f(n)
	{
		cin>>arr[i+1];
	}

	while(s!=e)
	{
		if(che[s]==1)
		{
			flag=false;
			break;
		}
		che[s]=1;
		//cout<<s;
		s=arr[s];
		//cout<<" "<<s<<endl;
		cnt++;
	}

	flag ? cout<<cnt : cout<<"-1";
	return 0;
}