#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define t(a) int a;cin>>a;
using namespace std;

int main(int argc, char const *argv[])
{
	t(t)

	while(t--)
	{
		t(m)
		t(n)
		int arr[m];
		f(m)
		{
			cin>>arr[i];
		}
		sort(arr,arr+m);
		if(arr[0]+n>=arr[m-1]-n)
			cout<<arr[0]+n<<endl;
		else
			cout<<"-1\n";
	}
	return 0;
}
