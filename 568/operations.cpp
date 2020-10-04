#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s,arr[n];
	s="";

	f(n)
	{
		int a;
		cin>>a;

		if(a==1)
		{
			string s1;
			cin>>s1;
			s.append(s1);
		}

		else if(a==2)
		{
			int k;
			cin>>k;

			s.erase(s.end()-k,s.end());
		}

		else if(a==3)
		{
			int k;
			cin>>k;

			cout<<s[k]<<endl;
		}

		else
		{
			//s=arr[i-2];
		}

		arr[i]=s;
		cout<<s<<" ";
	}
	return 0;
}