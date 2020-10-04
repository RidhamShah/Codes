#include<bits/stdc++.h>
#include<algorithm>
#define fr(i,n) for(long long int i=0;i<n;i++)
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int arr[n];
	set<long long int> g;
	fr(i,n)
	{
		long long int a;
		cin>>a;
		arr[i]=a;
		g.insert(a);
	}

	sort(arr,arr+n);

	if(g.size()==1)
	{

		cout<<"0";
	}

	else if(g.size()==2)
	{
		//cout<<"ya";
		set <long long int> :: iterator itr;
		itr=g.begin(); 
		long long int fir=*itr;
		++itr;
		long long int sec=*itr;
		float an=(sec-fir)/2.0;
		long long int aan=(sec-fir)/2;
		//cout<<an<<aan;
		if((an-aan)==0)
			cout<<aan;
		else
			cout<<sec-fir;
	}	

	else
	{
		long long int dif;
		for (long long int i = 1; i < n; ++i)
		{
			if(arr[i]!=arr[0])
			{
				dif=arr[i]-arr[0];
				break;
			}
		}

		bool flag=true;
		for (long long int i = 1; i < n; ++i)
		{
			if(arr[i]-arr[i-1]!=0 && arr[i]-arr[i-1]!=dif)
			{
				flag=false;
				break;
			}
		}

		flag ? cout<<dif : cout<<"-1";
	}

}