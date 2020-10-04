#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define h(n) for(long long int k=0;k<n;k++)
using namespace std;
//for (it1 = st.begin(); it1!=st.end();  ++it1) 
        //cout << *it1 << " "; 

int main()
{
	long long int n,m;
	cin>>n>>m;

	std::set<long long int> v[n+1];
	f(m)
	{
		long long int a;
		cin>>a;
		long long int arr[a];
		g(a)
		{
			cin>>arr[j];
		}
		g(a)
		{
			h(a)
			{
				v[arr[j]].insert(arr[k]);
				cout<<arr[j]<<" "<<arr[k]<<endl;
			}
		}
	}
	f(n)
	{
		long long int mx=0;
		set<int>::iterator it1; 
		for (it1 = v[i+1].begin(); it1!=v[i+1].end();  ++it1)
		{
			mx=max(mx,v[*itr].size())
		}
		/*g(v[i+1].size())
		{
			int t=v[i+1][j];
			mx=max(mx,v[t].size());
		}*/
		cout<<mx<<" ";
	}
	return 0;
}