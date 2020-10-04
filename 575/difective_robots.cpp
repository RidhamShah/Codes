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
		int x=-100000,xx=100000,y=-100000,yy=100000;
		int r,u,l,d,rx,ry;
		t(n);
		while(n--)
		{
			cin>>rx>>ry>>l>>u>>r>>d;

			if(r==0)
				x=max(x,rx);
			if(l==0)
				xx=min(xx,rx);
			if(u==0)
				yy=min(yy,ry);
			if(d==0)
				y=max(y,ry);
		}

		if(xx<x || yy<y)
			cout<<"0\n";
		else
		{
			cout<<"1\n";
		}
	}
	return 0;
}