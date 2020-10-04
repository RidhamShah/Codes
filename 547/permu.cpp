#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	long long int n;
	cin >> n;

	long long int arr[n];
	for(long long int i=0;i<n-1;i++)
	{
		cin>>arr[i];
	}

	std::vector<long long int> v;
	set <int, greater <int> > st;
	long long int ch=0;
	
	v.push_back(0);
	st.insert(0);
	for(long long int i=0;i<n-1;i++)
	{
		ch=ch+arr[i];
		v.push_back(ch);
		st.insert(ch);
	}

	sort(v.begin(),v.end());

	//cout<<v[0]<<endl<<(0-v[0]+1);
	if(v[v.size()-1]-v[0]==n-1 && v.size()-st.size()==0)
	{
		long long int che=0-v[0]+1;
		cout<<che<<" ";

		for(long long int i=0;i<n-1;i++)
		{
			che=che+arr[i];
			cout<<che<<" ";
		}	
	}	
	else
		cout<<"-1";

};

