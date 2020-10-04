#include<bits/stdc++.h>
#include<algorithm>
#define fi(n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, char const *argv[])
{
	int n,che=0;
	cin>>n;
	string s;
	cin>>s;
	int arr[9];
	fi(9)
	{
		cin>>arr[i];
	}

	fi(n)
	{
		if(s[i]-'0'<arr[s[i]-'1'] && che==0) che=1;
		if(s[i]-'0'>arr[s[i]-'1'] && che==1) che=-1;

		if(che>0) cout<<arr[s[i]-'1'];
		else cout<<s[i]-'0';
		//cout<<max(s[i]-'0',arr[s[i]-'1']);
	}
	return 0;
}