#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
//#include<boost/multiprecision/cpp_int.hpp>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define ff(a,n) for(long long int i=a;i<n;i++)
#define gg(a,n) for(long long int j=a;j<n;j++)
#define t(a) long long int a;cin>>a
#define test(te) t(te); while(te--)
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define ll long long 
#define lli long long int
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[])
{
	t(n);
	t(x);
	t(y);
	lli arrx[n];
	lli arry[n];
	lli q1=0,q2=0,q3=0,q4=0,r=0,l=0,u=0,d=0;

	f(n)
	{
		t(a);
		t(b);

		if(a>x && b<y)
			q4++;
		if(a>x && b>y)
			q1++;
		if(a<x && b>y)
			q2++;
		if(a<x && b<y)
			q3++;
		if(a>x && b==y)
			r++;
		if(a<x && b==y)
			l++;
		if(a==x && b>y)
			u++;
		if(a==x && b<y)
			d++;
	}

	lli ans=max(max(q1+q4+r,q1+q2+u),max(q3+q2+l,q4+q3+d));
	if(q1+q4+r==ans)
		cout<<ans<<endl<<x+1<<" "<<y;
	else if(q1+q2+u==ans)
		cout<<ans<<endl<<x<<" "<<y+1;
	else if(q3+q2+l==ans)
		cout<<ans<<endl<<x-1<<" "<<y;
	else
		cout<<ans<<endl<<x<<" "<<y-1;
	return 0;
}