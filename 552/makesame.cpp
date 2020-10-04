#include<bits/stdc++.h>
#include<algorithm>
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	set<int> g;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		g.insert(a);
	}


	set <int> :: iterator itr;
	itr=g.begin(); 
	int fir=*itr;
	++itr;
	int sec=*itr;
	float an=(sec-fir)/2;
	int aan=(sec-fir)/2;
		
	if(g.size()==2)
	{
		if((an-aan)==0)
			cout<<aan;
		else
			cout<<sec-fir;
	}
	else{
		for (;itr != g.end(); ++itr)
		{
			cout<<g[*itr-1];
		}
	}
	return 0;
}