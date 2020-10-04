#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=1;j<n;j++)
#define t(a) long long int a;cin>>a
using namespace std;


int main(int argc, char const *argv[])
{
	long long int arr[100001];
	arr[0]=0;
	g(100001)
	{	
		j%2 ? arr[j]=1-arr[(j-1)/2] : arr[j]=arr[j/2];
	}
	t(t);
	while(t--)
	{	
		std::vector<long long int> v;
		long long int aa[2]={0};
		t(q);
		while(q--)
		{
			t(a);
			aa[arr[a]]++;
			long long int k=v.size();
			f(k)
			{
				long long int c=a^v[i];
				aa[arr[c]]++;
				v.push_back(c);
			}
			v.push_back(a);
			cout<<aa[0]<<" "<<aa[1]<<endl;
		}
		
	}
	return 0;
}