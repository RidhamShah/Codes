#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	int n,qa=0,qb=0,ans=0;
	cin >>n;
	string a,b;
	cin>>a>>b;

	std::vector< pair<char,int> >va,vb;
	std::vector<int> vv,vw;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='?')
			qa++;
		va.push_back(make_pair(a[i],i+1));
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]=='?')
			qb++;
		vb.push_back(make_pair(b[i],i+1));
	}

	sort(va.begin(), va.end());
	sort(vb.begin(), vb.end());

	int aa=0,bb=0;
	aa+=qa;
	bb+=qb;
	while(aa<va.size() && bb<vb.size())
	{
		if(va[aa].first==vb[bb].first)
		{
			//cout<<va[aa].second<<" "<<vb[bb].second<<endl;
			vv.push_back(va[aa].second);
			vw.push_back(vb[bb].second);
			ans++;
			va.erase(va.begin()+aa);
			vb.erase(vb.begin()+bb);
			/*if(aa<va.size())
				aa++;
			if(bb<vb.size())
				bb++;*/
		}
		else if(va[aa]>vb[bb])
		{
			if(bb<vb.size())
				bb++;
		}
		else if(va[aa]<vb[bb])
		{
			if(aa<va.size())
				aa++;
		}
	}
	//cout<<ans<<endl;
	for(int i=0;i<qa;i++)
	{
		ans++;
		//cout<<va[0].second<<" "<<vb[vb.size()-1].second<<endl;
		vv.push_back(va[0].second);
		vw.push_back(vb[vb.size()-1].second);
		va.erase(va.begin());
		vb.erase(vb.end());
	}
	//cout<<ans<<endl<<"try";

	for(int i=0;i<vb.size();i++)
	{
		if(vb[i].first=='?')
		{
			ans++;
			//cout<<va[va.size()-1-i].second<<" "<<vb[i].second<<endl;
			vv.push_back(va[va.size()-1-i].second);
			vw.push_back(vb[i].second);
		}
		/*if(vb[0].first=='?')
		{
			ans++;
			cout<<va[va.size()-1].second<<" "<<vb[0].second<<endl;
			//cout<<vb[0].second<<" "<<va[va.size()-1].second<<endl;
			vb.erase(vb.begin());
			va.erase(va.end());
		}*/
	}

	cout<<ans<<endl;
	for(int i=0;i<ans;i++)
	{
		cout<<vv[i]<<" "<<vw[i]<<endl;
	}
}