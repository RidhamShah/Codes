#include <bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
#define mod 1000000007
#define init(arr,val) memset(arr,val,sizeof(arr))
#define ll long long int
#define F first
#define S second
#define fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define all(a) a.begin(),a.end()
#define br "\n"
//using namespace boost::multiprecision;
using namespace std;
ll power(ll x,ll y) {
	if (y == 0)
		return 1;
	ll p = power(x, y/2) % mod;
	p = (p * p) % mod;

	return (y%2 == 0)? p : (x * p) % mod;
}
void solve() {
	int n ;
	cin >> n ;
	int a[n] , now[n] = {0};
	for(int i = 0 ; i < n ; i ++) {
		cin >> a[i] ;
	}
	int mn = INT_MAX , mx = INT_MIN ;
	vector< pair<int,double> > ev[n] ;
	for(int i = 0 ; i < n ; i ++) {
		for(int j = 0 ; j < n ; j ++) {
			if(i ^ j) {
				if(i - j > 0 && a[i] - a[j] > 0) {
					ev[i].push_back({j , (double)(j - i) / (a[i] - a[j])}) ;
				}
				if(i - j > 0 && a[j] - a[i] > 0) {
					ev[i].push_back({j , (double)(i - j) / (a[j] - a[i])}) ;
				}
			}
		}
	}
//
//	int mn = *min_element(now , now + n);
//	int mx = *max_element(now , now + n);
	for(int i = 0 ; i < n ; i++) {
		int cas = 1 ;
		int j = i ;
		int c1 = a[j] , c2 = a[j] ;
		j ++ ;
		while(j < n) {
			if(a[j] < a[i]) {
				if(c1 > a[j]) {
					c1 = a[j] ;
				}
			}
		}
		for(int j = 0 ; j < i ; j++) {
			if(a[j] > c1) {
				cas++ ;
			}
			if(c2  < a[j]) {
				c2 = a[j];
			}
		}
		for(int j = i+1 ; j < n ; j ++) {
			if(a[j] < c2) {
				cas ++ ;
			}
		}
		if(mx < cas)mx = cas ;
		if(mn > cas)mn = cas ;
	}
	cout << mn  << " " << mx  << "\n" ;
}
int main() {
	fast ;
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}

