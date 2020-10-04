#include<bits/stdc++.h>
#include<algorithm>
#define f(n) for(int i=0;i<n;i++)
#define g(n) for(int i=0;i<n;i++)
using namespace std;


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int num[n];
	int arr[11]={0};
	f(n)
	{
		int a;
		cin>>a;
		num[i]=a;
		arr[a]++;
	}

	while(true)
	{
		std::vector<int> v;
		f(11)
		{
			if(arr[i]!=0)
				v.push_back(arr[i]);
		}

		sort(v.begin(),v.end());
		
		if(v.size()==1)
		{
			cout<<n;
			break;
		}
		else if(v.size()==2)
		{
			if(v[1]-v[0]==1)
			{
				cout<<n;
				break;
			}
		}
		else
		{
			bool equal =true,mm=false;
			for(int i=1;i<v.size()-2;i++)
			{
				if(v[i]!=v[i+1])
				{
					equal=false;
				}
			}

			//equal ? cout<<"0." : "1.";
			if(equal)
			{
				//cout<<"ya";
				if(v[0]==v[1] && v[v.size()-1]==(v[1]+1))
				{
					mm=true;
				}
				//cout<<v[0];
				if(v[0]==1 && v[v.size()-1]==v[1])
				{
					mm=true;
				}
			}

			if(mm)
			{
				cout<<n;
				break;
			}
		}
		n--;
		arr[num[n]]--;
	}
	return 0;
}