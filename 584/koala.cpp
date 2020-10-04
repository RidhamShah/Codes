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
	/*{
		op;
		t(n);
		string s;
		cin>>s;

		ll int arr[n];
		f(n)
		{
			arr[i]=s[i]-'0';
		}

		ll int a[n],b[n];
		f(n){
			cin>>a[i]>>b[i];
		}

		ll int cnt=0;
		f(1000)
		{
			// g(n)
			// {
			// 	cout<<arr[j];
			// }
			// cout<<" "<<endl;
			g(n)	
			{
				if(i==b[j])
				{
					b[j]+=a[j];
					if(arr[j]==1)
						arr[j]=0;
					else
						arr[j]=1;
				}
			}
			ll int mx=0;
			g(n)
			{
				if(arr[j]==1)
					mx++;
			}
			cnt=max(mx,cnt);

		}
		cout<<cnt;
		return 0;
	}*/
	{
		string s;
		cin>>s;
		sort(s.begin(),s.begin()+3);
		cout<<s;
	}