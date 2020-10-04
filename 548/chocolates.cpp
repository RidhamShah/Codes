#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	long long int n;
	cin>>n;

	long long int arr[n];
	for(long long int i=0;i<n;i++)
	{
		cin >>arr[i];
	}

	long long int che=arr[n-1]+1,cnt=0;
	for(long long int i=n-1;i>=0;i--)
	{
		if(arr[i]<che)
		{
			//cout<<arr[i]<<endl;
			cnt+=arr[i];
			che=arr[i];

		}
		else
		{
			if(che==0)
				break;
			else{
				//cout<<che-1<<endl;
				cnt+=che-1;
				che--;	
			}
			
		}
	}

	cout<<cnt;
}
