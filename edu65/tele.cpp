#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int i=1;i<n;i++)
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;

		bool flag =false;

		f(n-10)
		{
			if(s[i]=='8')
				flag=true;
		}

		flag ? cout<<"YES\n" : cout<<"NO\n";
	}
	return 0;
}