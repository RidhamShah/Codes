#include<bits/stdc++.h>
#include<algorithm>
#define f(n) for(int i=0;i<n;i++)
#define g(n) for(int j=0;j<n;j++)
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s;
	cin>>s;

	std::vector<char> v(s.begin(),s.end());
	int l=0,d=0;

	while(l<v.size()-1)
	{
		if( v[l]==v[l+1])
		{
			v.erase(v.begin()+l+1);
		}
		else
			l=l+2;

	}

	if(v.size()%2==1)
		v.erase(v.end()-1);

	cout<<n-v.size()<<endl;

	f(v.size())
	{
		cout<<v[i];
	}
	return 0;
}