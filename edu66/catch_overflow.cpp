#include<bits/stdc++.h>
#include <iostream> 
#include <string> 
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
using namespace std;

int main()
{
	long long int n,ans=0,mx=4294967295LL;
	bool flag=false;
	cin>>n;
	long long int mul=1;
	std::vector<long long int> v;
	while(n--)
	{

		string s;
		string s1("for"); 
    	string s2("end"); 
		cin>>s;

		if(s==s1)
		{
			long long int k;
			cin>>k;

			v.push_back(k);
			mul*=k;
		}
		else if(s==s2)
		{
			mul=mul/v.back();
			v.pop_back();
		}
		else
		{
			ans+=mul;
		}

		if(ans>mx || mul<0)
		{
			flag=true;
			break;
		}

		//cout<<ans;
	}
	flag ? cout<<"OVERFLOW!!!" : cout<<ans;
	return 0;
}