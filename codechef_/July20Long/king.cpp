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
 		t(a);
 		lli arr[8][8]={0};
 		lli cnt=0;
 		f(8)
 		{
 			g(8)
 			{
 				if(i==0&&j==0)
 					cout<<"O";
 				else if(cnt<a)
 					cout<<".";
 				else
 					cout<<"X";
 				cnt++;
 			}
 			cout<<ent;
 		}
 	}
    return 0;
}