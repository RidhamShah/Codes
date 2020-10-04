#include<bits/stdc++.h>
#include<algorithm>
#define fri(a,n) for(int i=a;i<n;i++)
#define frj(a,n) for(int j=a;j<n;j++)
#define frk(a,n) for(int k=a;k<n;k++)
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;

	int ch=n-11,cnt=ch/2;
	
	int st=0;
	while(st<s.size())
	{
		//cout<<st;
		if(cnt==0)
			break;
		if(s[st]!='8')
		{
			s.erase(s.begin()+st);
			cnt--;
		}
		else
			st++;
	}
	//cout<<s;
	fri(0,cnt) s.erase(s.end()-1);

	fri(0,ch/2)
	{
		if(s[0]=='8')
			s.erase(s.begin());
		else
			break;
	}

	s[0]=='8' ? cout<<"YES" : cout<<"NO";
	return 0;
}