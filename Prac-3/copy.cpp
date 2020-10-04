#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define t(a) long long int a;cin>>a
using namespace std;

int main(int argc, char const *argv[])
{
	t(x);
	t(y);
	if(y==1 && x!=0)
		cout<<"No";
	x=x+1-y;

	x>=0 && x%2==0 && y>0 ? cout<<"Yes" : cout<<"No";
	return 0;
}