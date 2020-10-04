#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
//#include<boost/multiprecision/cpp_int.hpp>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define ff(a,n) for(long long int i=a;i<n;i++)
#define gg(a,n) for(long long int j=a;j<n;j++)
#define t(a) long long int a;cin>>a
#define pb push_back
#define mp make_pair
#define ll long long
#define op std::ios_base::sync_with_stdio(false)
//using namespace boost::multiprecision;
using namespace std;



int main(int argc, char const *argv[])
{
	op;
	t(n);
	t(k);
 	ll int arr[n],ha[200001]={0},hb[200001]={0};
	f(n)
	{
		cout<<"afa";
		cin>>arr[i];
		ha[arr[i]]++;
	}

	//cout<<ha[1]<<ha[2]<<ha[3]<<ha[4]<<ha[5];
	for(ll int i=5;i>=0;i--)
	{
		cout<<ha[i]<<" "<<hb[i]<<endl;
		if(ha[i]+hb[i]>=k)
		{
			if(ha[i]>k)
			{
				cout<<0;
				//return 0;
			}
			else
			{
				cout<<k-ha[i];
				//return 0;
			}
		}
		else
		{
			hb[i/2]+=(ha[i]+hb[i]);
		}
	}
	return 0;
}