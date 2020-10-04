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
#define cas(i) cout<<"Case #"<<i+1<<": "
#define pb push_back
#define mp make_pair
#define F first
#define S second
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
    	set<lli> s;
    	map<lli,lli> m;
    	lli inc=1;
    	f(n)
    	{
    		cin>>arr[i];
    		s.insert(arr[i]);
    		if(m[arr[i]]==0){
    			m[arr[i]]=inc;
    			inc++;
    		}   		
    	}
    	if(s.size()==1)
    	{
    		cout<<"1\n";
    		f(n)
    			cout<<1<<" ";
    		cout<<ent;
    	}
    	else if(s.size()==2)
    	{
    		cout<<"2\n";
    		f(n)
    			cout<<m[arr[i]]<<" ";
    		cout<<ent;
    	}
    	else
    	{
    		if(n%2)
    		{
    			bool flag=false;
    			f(n-1)
    			{
    				if(arr[i]==arr[i+1])
    					flag=true;
    				if(arr[n-1]==arr[0])
    					flag=true;
    			}
    			if(flag)
    			{
    				lli chearr[n]={0};
    				chearr[0]=1;
    				bool done=false;
    				cout<<"2\n";
    				ff(1,n)
    				{
    					if(done)
    					{
    						chearr[i] = chearr[i-1]==1 ? 2 : 1;
    					}
    					else
    					{
    						if(arr[i]==arr[i-1])
    						{
    							done=true;
    							chearr[i]=chearr[i-1];
    						}
    						else
    							chearr[i]= chearr[i-1]==1 ? 2 : 1;
    					}
    				}
    				pri(chearr,n);
    			}
    			else
    			{
    				cout<<"3\n";
    				f(n-1)
    				{
    					cout<<(i%2)+1<<" ";
    				}
    				cout<<"3\n";
    			}
    		}
    		else
    		{
    			cout<<"2\n";
    			f(n)
    				cout<<(i%2)+1<<" ";
    			cout<<ent;
    		}
    	}
    }
    return 0;
}