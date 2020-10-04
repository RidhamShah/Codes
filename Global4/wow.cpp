#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define t(a) long long int a;cin>>a
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;

	long long int w=0,o=0;
	std::vector<long long int> vv,oo;
	bool flag=false;
	long long int ex=0;
	f(s.size()-1)
	{
		if(s[i]=='v' && s[i+1]=='v')
		{
			if(flag==true)
			{
				oo.push_back(o);
				//cout<<o<<" ";
				o=0;
				flag=false;
			}
			w++;
		}
		else if(s[i]=='v'&& s[i+1]=='o')
		{
			if(!flag)
			{
				vv.push_back(w);
				ex+=w;
				//	cout<<w<<" ";
				w=0;
			}
		}
		else if(s[i]=='o')
		{
			flag=true;
			o++;
		}
	}
	vv.push_back(w);
	ex+=w;
	
	long long int ans=0,exx=vv[0];
	ex-=vv[0];

	f(oo.size())
	{
		//cout<<exx<<ex<<oo[i];
		ans+=exx*ex*oo[i];
		exx+=vv[i+1];
		ex-=vv[i+1];
	}
	cout<<ans;
	return 0;
}