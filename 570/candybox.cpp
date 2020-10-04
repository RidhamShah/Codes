#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define t(a) long long int a;cin>>a;
using namespace std;

int main(int argc, char const *argv[])
{
	t(t)
	while(t--)
	{
		t(n)
		
		long long int arr[200001]={0};
		long long int ab[200001]={0};
		f(n)
		{
			long long int a;
			cin>>a;
			arr[a]++;
		}
		std::vector<long long int> v;
		f(200001)
		{
			if(arr[i]!=0)
				v.push_back(arr[i]);
		}
		sort(v.begin(),v.end());
		long long int sum=0;
		bool flag=false;
		f(v.size())
		{
			if(ab[v[i]]==0)
			{
				ab[v[i]]=1;
				sum+=v[i];
				flag=false;
			}
			else
			{
				if(v[i]==v[i-1] && flag)
					continue;
				else
					flag=false;
				for(long long int j=v[i]-1;j>0;j--)
				{	
					flag=true;
					if(ab[j]==0)
					{
						ab[j]=1;
						sum+=j;
						flag=false;
						goto aa;
					}
				}
				aa:;
			}
		}
		cout<<sum<<endl;	
	}
	return 0;
}