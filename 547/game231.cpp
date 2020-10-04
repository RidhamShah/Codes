#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	int n,m;
	cin >> m>>n;

	bool flag=true;
	int cnt=0;
	int t=n/m;
	if(  ((float)n/(m) - n/m )== 0)
	{
		flag=false;
	}
	else
	{
		while(t%2==0)
		{
			t=t/2;
			cnt++;
		}

		while(t%3==0)
		{
			t=t/3;
			cnt--;
		}

		if(t==0)
			flag=true;
		else
			flag=false;
	}

	flag ? cout << cnt : cout << "-1";
}
