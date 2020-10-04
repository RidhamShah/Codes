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
	int arr[n];
	f(n)
	{
		string s;
		cin>>s;
		int a = s[0]-'a';
		arr[i]=a;
	}

	sort(arr,arr+n);
	int i=2,cnt=0,mcnt=0;
	while(i<n)
	{
		if(arr[i]==arr[i-2])
		{
			cnt++;
		}
		else
		{
			mcnt+=(((cnt+1)*cnt)/2);
			cnt=0;
		}
		i+=2;
	}
	mcnt+=(((cnt+1)*cnt)/2);

	i=3;
	cnt=0;
	while(i<n)
	{
		if(arr[i]==arr[i-2])
		{
			cnt++;
		}
		else
		{
			mcnt+=(((cnt+1)*cnt)/2);
			cnt=0;
		}
		i+=2;
	}
	mcnt+=(((cnt+1)*cnt)/2);	
	
	cout<<mcnt;
	return 0;
}