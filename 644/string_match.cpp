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
    	t(l);
    	string s[n];
    	f(n)
    		cin>>s[i];
    	lli arr[l]={0};
    	char jor[l];
    	f(n-1)
    	{
    		g(l)
    		{
    			if(s[i][j]!=s[i+1][j])
    				arr[j]=1;
    		}
    	}
    	lli ans=0;
    	f(l)
    		ans+=arr[i];
    	if(ans>2)
    		cout<<-1<<ent;
    	else
    	{
    		f(l)
    		{
    			lli che[26]={0};
    			lli mx=0;
    			if(arr[i]==0)
    				jor[i]=s[0][i];
    			else
    			{
    				g(n)
    				{
    					che[s[j][i]-'a']++;
    					mx=max(mx,che[s[j][i]-'a']);
    				}
    				g(26){
    					if(che[j]==mx){
    						jor[i]=char(j+'a');
    						break;
    					}
    				}
    			}
    		}
    		f(l)
    			cout<<jor[i];
    		cout<<ent;
    	}
    }
    return 0;
}