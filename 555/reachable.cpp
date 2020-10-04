#include<bits/stdc++.h>
#include<algorithm>

#define fj(n) for(long long int j=a;j<n;j++)
using namespace std;

int main(long long int argc, char const *argv[])
{
	long long int n;
	cin>>n;
	long long int ans=9;
	if(n>9) ans++;
	while(n>9)
	{
		//cout<<ans;
		ans+=(9-(n%10));
		n/=10;
	}
	cout<<ans;
	//2239  124 125 126 127 128 129 13 14 15 16 17 18 19 2 3 4 5 6 7 8 9 1
	return 0;
}

