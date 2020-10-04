#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=n-1;j>=0;j--)
#define t(a) long long int a;cin>>a
using namespace std;

int main(int argc, char const *argv[])
{
	t(t);
	while(t--)
	{
		t(n);
		t(k);
		long long int arr[n],od=0,d=k;
		f(n)
		{
			cin>>arr[i];
			if(arr[i]%2==1)
				od++;
		}
		if((od-k)%2==0 && od>=k)
		{
			cout<<"YES\n";
			std::vector<long long int> v;
			g(n)
			{
				if(arr[j]%2==1)
					v.push_back(j+1);
				if(v.size()==k)
				{
					f(v.size()-1)
					{
						cout<<v[v.size()-i-1]<<" ";
					}
					cout<<n;
					break;
				}
			}
			cout<<endl;
		}
		else
		{
			cout<<"NO\n";
		}

	}
	return 0;
}