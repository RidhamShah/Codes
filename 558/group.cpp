#include<bits/stdc++.h>
#include<algorithm>
#define f(n) for(int i=0;i<n;i++)
#define g(n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	if(n==m)
		cout<<"0\n";
	else if(m==0)
		cout<<"1\n";
	else if(n/m==1)
		cout<<(n-m);
	else 
		cout<<m;
	return 0;
}