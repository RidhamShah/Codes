#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define t(a) long long int a;cin>>a;
using namespace std;
	
int main(int argc, char const *argv[])
{
	t(q)
	while(q--)
	{
		t(k)
		t(n)
		t(a)
		t(b)
		if(k<=b*n)
		{
			cout<<"-1"<<endl;
			continue;
		}
		long long int aa=k-b*n;
		long long int bb=a-b;
		long long int cc=aa/bb;
		long long int dd=aa%bb;
		if(dd==0)
		{
			if(cc-1>n)
				cout<<n<<endl;
			else
				cout<<cc-1<<endl;
		}
		else
		{
			if(cc>n)
				cout<<n<<endl;
			else
				cout<<cc<<endl;
		}
	}
	return 0;
}