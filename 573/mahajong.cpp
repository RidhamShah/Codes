#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define t(a) long long int a;cin>>a
using namespace std;

int main(int argc, char const *argv[])
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3;

	int  a[3];
	char aa,bb,cc;

	a[0]=s1[0]-'0';
	aa=s1[1];
	a[1]=s2[0]-'0';
	bb=s2[1];
	a[2]=s3[0]-'0';
	cc=s3[1];
	
	//cout<<a[0]<<aa<<a[1]<<bb<<a[2]<<cc;
	//cout<<aa;
	int s=0,m=0,p=0;
	if(aa=='s')
		s++;
	else if(aa=='m')
		m++;
	else if(aa=='p')
		p++;

	//cout<<s<<p<<m;
	if(bb=='s')
		s++;
	else if(bb=='m')
		m++;
	else if(bb=='p')
		p++;

	if(cc=='s')
		s++;
	else if(cc=='m')
		m++;
	else if(cc=='p')
		p++;

	//cout<<s<<m<<p;
	if(s==3 || m==3 || p==3)
	{
		//cout<<s<<p<<m;
		sort(a,a+3);
		if(a[1]-a[0]==1 && a[2]-a[1]==1)
		{
			cout<<"0";
		}
		else if(a[1]==a[0] && a[2]==a[1])
			cout<<"0";
		else if(a[1]-a[0]<=2 || a[2]-a[1]<=2)
		{
			cout<<"1";
		}
		else
		{
			cout<<"2";
		}
	}
	else if(s==2)
	{
		//cout<<"2|";
		std::vector<int> v;
		if(aa=='s')
			v.push_back(a[0]);

		if(bb=='s')
			v.push_back(a[1]);

		if(cc=='s')
			v.push_back(a[2]);

		sort(v.begin(),v.end());

		if(v[1]==v[0] || v[1]-v[0]==1 || v[1]-v[0]==2)
			cout<<"1";
		else
			cout<<"2";
	}
	else if(p==2)
	{
		//cout<<"ya";
		std::vector<int> v;
		if(aa=='p')
			v.push_back(a[0]);

		if(bb=='p')
			v.push_back(a[1]);

		if(cc=='p')
			v.push_back(a[2]);

		sort(v.begin(),v.end());
		//cout<<v[0]<<v[1];

		if(v[1]==v[0] || v[1]-v[0]==1 || v[1]-v[0]==2)
			cout<<"1";
		else
			cout<<"2";
	}
	else if(m==2)
	{
		std::vector<int> v;
		if(aa=='m')
			v.push_back(a[0]);

		if(bb=='m')
			v.push_back(a[1]);

		if(cc=='m')
			v.push_back(a[2]);

		sort(v.begin(),v.end());

		if(v[1]==v[0] || v[1]-v[0]==1 || v[1]-v[0]==2)
			cout<<"1";
		else
			cout<<"2";
	}
	else
		cout<<"2";
	return 0;
}