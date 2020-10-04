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
	lli arr[n+1]={0};
	std::vector<lli> ans1,ans2,ans3;
	t(m);
	f(m)
	{
		t(a);
		t(b);
		t(c);
		arr[a]+=c;
		arr[b]-=c;
	}
	std::vector<lli> v1,v2;
	f(n+1)
	{
		if(arr[i]>0)
			v1.pb(i);
		else if(arr[i]<0)
			v2.pb(i);
	}


	while(v1.size()!=0 && v2.size()!=0)
	{
		lli l1=v1[v1.size()-1];
		lli l2=v2[v2.size()-1];
		//cout<<l1<<" "<<l2<<" "<<min(abs(arr[l1]),abs(arr[l2]))<<endl;
		ans1.pb(l1);
		ans2.pb(l2);
		ans3.pb(min(abs(arr[l1]),abs(arr[l2])));
		lli dif=min(abs(arr[l1]),abs(arr[l2]));
		//cout<<arr[l2]<<" + "<<min(abs(arr[l1]),abs(arr[l2]))<<" = "<<arr[l2]+min(abs(arr[l1]),abs(arr[l2]));
		arr[l1]-=dif;
		arr[l2]+=dif;

		//cout<<arr[l2]<<endl;
		if(arr[l1]==0)
			v1.pop_back();
		if(arr[l2]==0)
			v2.pop_back();
	}
	cout<<ans1.size()<<endl;
	f(ans1.size())
	{
		cout<<ans1[i]<<" "<<ans2[i]<<" "<<ans3[i]<<endl;
	}
	
	return 0;
}