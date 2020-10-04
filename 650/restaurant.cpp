#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#include<iostream>
//#include<boost/multiprecision/cpp_int.hpp>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define ff(a,n) for(long long int i=a;i<n;i++)
#define gg(a,n) for(long long int j=a;j<n;j++)
#define t(a) long long int a;cin>>a
#define test(te) t(te); while(te--)
#define all(a) a.begin(),a.end()
#define ent "\n"
#define pri(a,n) f(n){cout<<a[i]<<" ";}cout<<ent
#define cas(i) "Case #"<<i+1<<": "
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define mod 1000000007  
#define ll long long 
#define lli long long int
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
using namespace std;

int main(int argc, char const *argv[])
{
    op;
    test(t)
    {
    	t(n);
    	t(k);
    	lli arr[n+k]={0};
    	string s;
    	cin>>s;
    	f(n)
    	{
    		arr[i]=s[i]-'0';
    	}
    	lli zcnt=0,mcnt=0,mcnt2=0;
    	lli ind=-1;
    	f(k+1)
    	{
    		if(arr[i]==1)
    			ind=i;
    	}
    	if(ind==-1){
    		mcnt++;
    		ind=0;
    	}
    	ff(ind+1,n+k)
    	{
    		if(arr[i]==0)
    		{
    			zcnt++;
    			if(zcnt==2*k+1)
    			{
    				mcnt++;
    				zcnt=k;
    			}
    		}
    		else
    			zcnt=0;
    	}
    	cout<<mcnt<<ent;
    }
    return 0;
}
