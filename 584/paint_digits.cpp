#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
//#include<boost/multiprecision/cpp_int.hpp>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define ff(a,n) for(long long int i=a;i<n;i++)
#define gg(a,n) for(long long int j=a;j<n;j++)
#define t(a) long long int a;cin>>a
#define pb push_back
#define mp make_pair
#define ll long long
#define op std::ios_base::sync_with_stdio(false)
//using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[])
{
	op;
	t(t);
	while(t--)
	{
		t(n);
		string s,ss;
		cin>>s;
		ss=s;
		int mx=0;
		f(s.size())
		{
			mx=max(mx,s[i]-'0');
		}

		bool flag=true;
		int ch=s[n-1]-'0';
		for(int i=n-1;i>=0;i--)
		{
			if(s[i]-'0'==mx)
				break;
			if(s[i]-'0'>ch && s[i]-'0'<mx){
				cout<<"-\n";
				flag=false;
				break;
			}
		}

		std::vector<int> v,w;
		if(flag){

			//sort(ss.begin(),ss.begin()+n);
			//cout<<ss<<endl;
			// for(int i=n-1;i>=0;i--)
			// {
			// 	ss=s;
			// 	sort(ss.begin(),ss.begin()+i+1);
			// 	//cout<<ss[i];
			// 	if(s[i]==ss[i])
			// 		w.pb(s[i]-'0');
			// 	else
			// 		v.pb(s[i]-'0');
				
			// }
			
			if(s[n-1]-'0'==mx)
			{
				for(int i=n-1;i>=0;i--)
				{
					if(s[i]-'0'==mx)
						w.pb(s[i]-'0');
					else
					{
						if(v.size()==0){
							ch=s[i]-'0';
							v.pb(s[i]-'0');
							continue;
						}
						if(s[i]-'0'>ch)
						w.pb(s[i]-'0');
						else if(s[i]-'0'>v[v.size()-1])
							w.pb(s[i]-'0');
						else
							v.pb(s[i]-'0');
					}
				}
			}
			else{
				v.pb(s[n-1]-'0');
				for(int i=n-2;i>=0;i--)
				{
					if(s[i]-'0'>ch)
						w.pb(s[i]-'0');
					else if(s[i]-'0'>v[v.size()-1])
						w.pb(s[i]-'0');
					else
						v.pb(s[i]-'0');
				}
			}
			
			
			/*f(v.size())
				cout<<v[v.size()-1-i];
			cout<<" ";
			f(w.size())
				cout<<w[w.size()-1-i];

			cout<<endl;
			*/
		}


		int arr[n]={0};
		if(v[0]>w[w.size()-1])
			cout<<"-\n";
		else
		{
			f(n)
			{
				if(v[v.size()-1]==s[i]-'0'){
					cout<<"1";
					v.erase(v.end()-1,v.end());
				}
				else if(w[w.size()-1]==s[i]-'0'){

					cout<<"2";
					w.erase(w.end()-1,w.end());
				}
			}
			cout<<endl;
		}

	}
	return 0;
}