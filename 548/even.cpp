#include<bits/stdc++.h>
#include<algorithm>
#define fr(i,a) for(long long int i=0;i<a;i++)

using namespace std;
int main()
{
	long long int n;
	cin >> n;

	string s;
	cin >>s;
	long long int cnt=0;
	fr(i,n)
	{
		if(s[i]%2==0)
			cnt+=i+1;
	}

	cout<<cnt;
}