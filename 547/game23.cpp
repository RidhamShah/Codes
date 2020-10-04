#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	long long int n,m;
	cin >> m>>n;

	bool flag=true;
	long long int cnt=0;
	long long int t=n/m;
	float k =n*1.0/m;
	//cout<<k;
	if(  k - n/m != 0)
	{
	//	cout<<"y";
		flag=false;
	}
	else
	{
	//	cout<<t;
		while(t%2==0)
		{
			t=t/2;
			cnt++;
			//cout <<t<<endl;
		}

		while(t%3==0)
		{
			t=t/3;
			cnt++;
			//cout <<t<<endl;
		}

		if(t==1)
			flag=true;
		else
			flag=false;
	}

	flag ? cout << cnt : cout << "-1";
}