#include<bits/stdc++.h>
#include<algorithm>
#define fr(i,n) for(long long int i=0;i<n;i++)
using namespace std;
int main()
{
	long long int n;
	cin>>n;

	vector<long long int> v;
	while(n!=0)
	{
		v.push_back(n%10);
		n=n/10;
	}
	

	long long int ans=pow(9,v.size()-1);
	if(v[v.size()-1]!=1)
		ans*=(v[v.size()-1]-1);
	
	//093
	for(int i=v.size()-1;i>0;i--)
	{
		if(v[i-1]=='0')
		{
			v[i]-=1;
			v[i-1]=9;
		}
	}
	fr(i,v.size())
		cout<<v[i];

	long long anss=1;
	fr(i,v.size())
	{
		anss*=v[i];
	}

	cout<<max(ans,anss);
}
