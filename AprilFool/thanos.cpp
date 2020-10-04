#include<bits/stdc++.h>
#include<algorithm>
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;

bool check(int l,int r,int *arr)
{
	vector<int> v,w;
	
	for(int i=l;i<r;i++)
	{
		v.push_back(arr[i]);
		w.push_back(arr[i]);
	}
	bool flag=true;
	sort(v.begin(), v.end());
	for(int i=0;i<v.size();i++)
	{
		if(v[i]!=w[i])
		{
			flag=false;
			break;
		}
	}
	return flag;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	fr(i,n)
	{
		cin>>arr[i];
	}

	if(n==1)
	{
		cout<<"1";
	}
	else if(n==2)
	{
		if(arr[0]<=arr[1])
			cout<<"2";
		else
			cout<<"1";
	}
	else if(n==4)
	{
		bool f=check(0,4,arr);
		
		if(f==false)
		{
			bool g=check(0,2,arr);
			bool h=check(2,4,arr);
			if(g || h)
				cout<<"2";
			else
				cout<<"1";
		}
		else
		{
			cout<<"4";	
		}

	}
	else if(n==8)
	{
		bool k=check(0,8,arr);
		if(k==false)
		{
			bool f=check(0,4,arr);
			bool ff=check(4,8,arr);
			if(f==false && ff==false)
			{
				bool g=check(0,2,arr);
				bool h=check(2,4,arr);
				bool gg=check(4,6,arr);
				bool hh=check(6,8,arr);
				if(g || gg || h || hh)
					cout<<"2";
				else
					cout<<"1";
			}
			else
			{
				cout<<"4";	
			}
		}
		else
			cout<<"8";
	}
	else
	{
		bool z=check(0,16,arr);
		if(z==false)
		{
			bool g=check(0,8,arr);
			bool gg =check(8,16,arr);
			if(g || gg)
				cout<<"8";
			else
			{
				bool h=check(0,4,arr);
				bool hh=check(4,8,arr);
				bool hhh=check(8,12,arr);
				bool hhhh=check(12,16,arr);
				if(h||hh||hhh||hhhh)
					cout<<"4";
				else
				{
					bool k1=check(0,2,arr);
					bool  k2=check(2,4,arr);
					bool  k3=check(4,6,arr);
					bool  k4=check(6,8,arr);
					bool k5=check(8,10,arr);
					bool  k6=check(10,12,arr);
					bool  k7=check(12,14,arr);
					bool  k8=check(14,16,arr);
					if(k1||k2||k3||k4||k5||k6||k7||k8)
						cout<<"2";
					else
						cout<<"1";
				}
			}
		}
		else
			cout<<"16";
	}
}