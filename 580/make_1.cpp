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
	t(n);
	long long int arr[n],ans=0,ch=0,ze=0;
	f(n)
	{
		cin>>arr[i];
		if(arr[i]<0)
		{
			ans+=abs(arr[i]+1);
			ch++;
		}
		else if(arr[i]>0)
		{
			ans+=abs(arr[i]-1);
		}
		else
		{
			ans+=1;
			ze++;
		}

		//cout<<ans;
	}

	ch=ch%2;
	if(ch==1 && ze<=0)
		ans+=2;

	cout<<ans;
	return 0;
}