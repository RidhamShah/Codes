#include<bits/stdc++.h>
#include<algorithm>
#define fi(n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<int> v;
	fi(n)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	string s;

	int l=v.size()-1,che=0;
	if(v[0]>v[l])
	{
		s.append("L");
		cout<<"L";
		che=v[0];
		v.erase(v.begin());
	}
	else
	{
		s.append("R");
		cout<<"R";
		che=v[l];
		v.erase(v.end()-1);
	}

	bool flag=true;
	while(n-- && flag)
	{
		if(che>v[0]&&che>v[l])
			flag=false;
		else if(che<v[0]&&che<v[l]&&v[0]<v[l])
		{
			cout<<"L";
			v.erase(v.begin());
		}

		else if(che<v[0]&&che<v[l]&&v[0]>v[l])
		{
			cout<<"R";
			v.erase(v.end()-1);
		}
		else if(che<v[0]&&che>v[l])
		{
			cout<<"R";
			v.erase(v.end()-1);
		}

		else if(che>v[0]&&che<v[l])
		{
			cout<<"L";
			v.erase(v.begin());
		}
	}
	return 0;
}