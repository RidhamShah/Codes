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
	op;
	test(t)
	{
		t(n);
		lli arr[n];
		lli sum=0,xo=0;
		f(n)
		{
			cin>>arr[i];
			sum+=arr[i];
			xo=xo^arr[i];
		}
		lli sum2,xo2;
		if(sum==2*xo){
			cout<<"0\n\n";
		}
		else if(sum%2)
		{
			lli y=999999999,x;
			y+=2;
			do
			{
				y-=2;
				sum2=sum+y;
				xo2=xo^y;
				x=((2*xo2)-sum2)/2;
			} while (x<0);
			
			cout<<"3\n";
			cout<<y<<" "<<x<<" "<<x<<endl;
		}
		else{ 

			lli y=1000000002,x;
			do
			{
				y-=2;
				sum2=sum+y;
				xo2=xo^y;
				x=((2*xo2)-sum2)/2;
			} while (x<0);
			
			cout<<"3\n";
			cout<<y<<" "<<x<<" "<<x<<endl;
		}
	}
	return 0;
}