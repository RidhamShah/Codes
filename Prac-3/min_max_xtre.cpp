#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define t(a) long long int a;cin>>a
using namespace std;

int main(int argc, char const *argv[])
{
	t(t);
	while(t--)
	{
		t(n);
		t(k);
		//cout<<k;
		long long int a=k%n;
		
		if(n==1)
			cout<<"0\n";
		else if(n==2)
			cout<<a<<endl;
		else
			cout<<2*min(a,n-a)-(a==n-a)<<endl;

	}
	return 0;
}