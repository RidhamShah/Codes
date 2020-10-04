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
	if(n%2==0)
		cout<<"NO";
	else
	{
		cout<<"YES\n";
		int arr[2*n]={0};
		int st=0,end=n,k=1;
		f(n)
		{
			arr[st%(2*n)]=k;
			arr[end%(2*n)]=k+1;
			int swap=st+1;
			st=end+1;
			end=swap;
			k+=2;
		}

		f(2*n)
			cout<<arr[i]<<" ";
	}
	return 0;
}