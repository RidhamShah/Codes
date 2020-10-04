#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
using namespace std;

void findAllOccurances(std::vector<size_t> & vec, std::string data, std::string toSearch)
{
	// Get the first occurrence
	size_t pos = data.find(toSearch);
 
	// Repeat till end is reached
	while( pos != std::string::npos)
	{
		// Add position to the vector
		vec.push_back(pos);
 
		// Get the next occurrence from the current position
		pos =data.find(toSearch, pos + toSearch.size());
	}
}
 
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int arr[26]={0};

	string ar[n];
	f(n)
	{
		cin>>ar[i];
	}

	string che="a";
	bool flag=true;
	while(flag)
	{
		f(n)
		{
			std::string data = ar[i];
 
			std::vector<size_t> vec;
		 	
		 	findAllOccurances(vec, data , che);
		 	cout<<vec.size();
		 	g(vec.size())
			{
				if(vec[j]<data.size())
					arr[data[vec[j]+1]-'a']==1;
			}
		}
		flag=false;
	}
	
	int ans=0;
	f(26)
		ans+=arr[i];

	//cout<<ans;
	return 0;
}