#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define t(a) long long int a;cin>>a
using namespace std;

int main(long long int argc, char const *argv[])
{
	t(n);
	t(m);
	t(x);
	t(y);
	t(t);
	long long int s=0;
	while(t--)
	{
		t(a);
		t(b);
		int aa,bb,ss;
		if(a==0)
		{
			b>0? ss=(m-y)/b : ss=(1-y)/b;
			y+=ss*b;
			s+=ss;
		}
		else if(b==0)
		{
			a>0? ss=(n-x)/a : ss=(1-x)/a;
			x+=ss*a;
			s+=ss;
		}
		else
		{
			a>0? aa=(n-x)/a : aa=(1-x)/a;
			b>0? bb=(m-y)/b : bb=(1-y)/b;
			ss=min(aa,bb);
			x+=ss*a;
			y+=ss*b;
			s+=ss;
		}
		//cout<<x<<y<<endl;
	}
	cout<<s;
	return 0;
}