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
		s.append("R");
		//cout<<"R";
		che=v[l];
		v.erase(v.end()-1);
	}
	else
	{
		s.append("L");
		//cout<<"L";
		che=v[0];
		
		v.erase(v.begin());
	}

	bool flag=true;
	while(n-- && flag)
	{
		l=v.size()-1;
		
		if(che>v[0]&&che>v[l])
			break;
		else if(che<v[0]&&che<v[l]&&v[0]<v[l])
		{
			s.append("L");
			che=v[0];
			v.erase(v.begin());
			
		}

		else if(che<v[0]&&che<v[l]&&v[0]>v[l])
		{
			s.append("R");
			che=v[l];
			v.erase(v.end()-1);
			
		}
		else if(che<v[0]&&che>v[l])
		{
			s.append("L");
			che=v[0];
			v.erase(v.begin());
			
		}

		else if(che>v[0]&&che<v[l])
		{
			
			s.append("R");
			che=v[l];
			v.erase(v.begin()+l);
			
		}
	}
	if(v.size()==1)
	{
		if(che<v[0]) s.append("R");
	}
	
	cout<<s.size()<<endl<<s;
	return 0;
}
