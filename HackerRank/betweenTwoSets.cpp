#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  	int n,m;
  	cin >> n;
  	cin >> m;
  	int a[n];
  	int b[m];
  	for (int i = 0; i < n; ++i)
  	{
  		cin >> a[i];
  	}
  	for (int i = 0; i < m; ++i)
  	{
  		cin >> b[i];
  	}
  	sort(a,a+n);
  	sort(b,b+m);
  	
  	return 0;
}
